/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:22:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 21:57:57 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* =========================== DELIVERY MAIN (TOP) =========================== */
#ifndef RUN_TESTS

int main() {
    const int N = 5;
    Zombie *h = zombieHorde(N, "HordeGuy");
    if (h) {
        for (int i = 0; i < N; ++i)
            h[i].announce();
        delete[] h; // correct pair for new[]
    }
    return 0;
}

/* ============================== TESTS SECTION ============================== */
#else  // RUN_TESTS defined → compile the tester main below

// Toggle tests: enable ONE negative at a time.
#define RUN_REENTRANCY_TEST     0  // Good path: two hordes, free in reverse order
#define RUN_OWNERSHIP_POSITIVE  0  // Good path: new[]/delete[] correctly
#define RUN_OWNERSHIP_LEAK      1  // Negative: missing delete[] → leak
#define RUN_OWNERSHIP_MISMATCH  0  // Negative: delete (not delete[]) → mismatch
#define RUN_USE_AFTER_FREE      0  // Negative: use after delete[] → invalid read

#if RUN_REENTRANCY_TEST
static void reentrancy_test() {
    const int N1 = 3, N2 = 2;
    Zombie* h1 = zombieHorde(N1, "ReA");
    Zombie* h2 = zombieHorde(N2, "ReB");
    for (int i = 0; i < N1; ++i) h1[i].announce();
    for (int j = 0; j < N2; ++j) h2[j].announce();
    delete[] h2;
    delete[] h1;
}
#endif

#if RUN_OWNERSHIP_POSITIVE
static void ownership_positive() {
    const int N = 4;
    Zombie* ok = zombieHorde(N, "OwnerOK");
    if (ok) { for (int i = 0; i < N; ++i) ok[i].announce(); delete[] ok; }
}
#endif

#if RUN_OWNERSHIP_LEAK
static void ownership_leak() {
    const int N = 3;
    Zombie* leak = zombieHorde(N, "Leak");
    if (leak) { for (int i = 0; i < N; ++i) leak[i].announce(); /* no delete[] on purpose */ }
}
#endif

#if RUN_OWNERSHIP_MISMATCH
static void ownership_mismatch() {
    const int N = 2;
    Zombie* bad = zombieHorde(N, "Mismatch");
    if (bad) { for (int i = 0; i < N; ++i) bad[i].announce(); delete bad; /* WRONG */ }
}
#endif

#if RUN_USE_AFTER_FREE
static void use_after_free() {
    const int N = 2;
    Zombie* uaf = zombieHorde(N, "UAF");
    if (uaf) { delete[] uaf; uaf[0].announce(); /* WRONG */ }
}
#endif

int main() {
#if RUN_REENTRANCY_TEST
    reentrancy_test();
#endif
#if RUN_OWNERSHIP_POSITIVE
    ownership_positive();
#endif
#if RUN_OWNERSHIP_LEAK
    ownership_leak();
#endif
#if RUN_OWNERSHIP_MISMATCH
    ownership_mismatch();
#endif
#if RUN_USE_AFTER_FREE
    use_after_free();
#endif
    return 0;
}

#endif /* RUN_TESTS */