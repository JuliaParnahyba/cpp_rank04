/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:22:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 21:17:40 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    const int N = 5;
    Zombie *h = zombieHorde(N, "HordeGuy");

    if (h) {
        for (int i = 0; i < N; i++)
            h[i].announce();
        delete[] h; // correct pair for new[]
    }
    return 0;
}

/*
// Toggle tests: set to 1 to enable, 0 to disable.
// Run ONE negative test at a time to keep Valgrind output clear.
#define RUN_REENTRANCY_TEST     0  // Good path: two hordes, independent, free in different order
#define RUN_OWNERSHIP_POSITIVE  0  // Good path: create & delete[] correctly

#define RUN_OWNERSHIP_LEAK      0  // Negative: forget delete[]  -> expect leaks
#define RUN_OWNERSHIP_MISMATCH  0  // Negative: delete instead of delete[] -> expect "Mismatched free()"
#define RUN_USE_AFTER_FREE      1  // Negative: use after delete[] -> expect "Invalid read"

static void reentrancy_test() {
    const int N1 = 3, N2 = 2;
    Zombie* h1 = zombieHorde(N1, "ReA");
    Zombie* h2 = zombieHorde(N2, "ReB");

    // Announce both hordes (order doesn't matter; they are independent)
    for (int i = 0; i < N1; ++i) h1[i].announce();
    for (int j = 0; j < N2; ++j) h2[j].announce();

    // Free in different order to prove independence
    delete[] h2;
    delete[] h1;
}

static void ownership_positive() {
    const int N = 4;
    Zombie* ok = zombieHorde(N, "OwnerOK");
    if (ok) {
        for (int i = 0; i < N; ++i) ok[i].announce();
        delete[] ok; // correct pair for new[]
    }
}

static void ownership_leak() {
    const int N = 3;
    Zombie* leak = zombieHorde(N, "Leak");
    if (leak) {
        for (int i = 0; i < N; ++i) leak[i].announce();
        // INTENTIONAL leak: do not delete[]
        // Expect Valgrind: "definitely lost" (and maybe "indirectly lost")
    }
}

static void ownership_mismatch() {
    const int N = 2;
    Zombie* bad = zombieHorde(N, "Mismatch");
    if (bad) {
        for (int i = 0; i < N; ++i) bad[i].announce();
        delete bad; // WRONG on purpose: should be delete[]
        // Expect Valgrind: "Mismatched free()/delete/delete[]"
    }
}

static void use_after_free() {
    const int N = 2;
    Zombie* uaf = zombieHorde(N, "UAF");
    if (uaf) {
        delete[] uaf;
        uaf[0].announce(); // WRONG on purpose: use after free
        // Expect Valgrind: "Invalid read of size ..."
    }
}

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
*/