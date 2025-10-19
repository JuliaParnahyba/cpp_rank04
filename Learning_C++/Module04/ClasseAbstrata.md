# Classe Abstrata

Uma classe abstrata é um classe base que não pode ser instanciada diretamente, servindo apenas de modelo (interface) para outras classes, a partir da marcação de pelo menos um método como "puro virtua".

```cpp
class Animal {
    public:
        virtual void makeSound() const = 0; // '= 0' marca o método puro
};
```

_O "= 0" indica que o método não tem implementação aqui, devendo, obrigatoriamente, ser implementado nas classes derivadas._

## Por que usar Classe Abstrata?
Implementar algo que não pode ser instanciado pode parecer inútil, mas na verdade é um dos pilares da **arquitetura orientada a objetos**.

Pegando no exemplo da `class Animal`, ao instanciar a classe (`Aniaml a;`) estamos criando um animal genérico, que nu fundo não existe no mundo real. A criação da classe, que representa um animal genérico, serve para definir o que todo animal deve saver fazer, mas sem dizer como cada um faz. 

### Analogia:
`class Animal` → "interface de contrato". [_Se queiser ser um Animal precisa me dizer como faz `makeSound()`_]
    - Dog → "Au au!"
    - Cat → "Miau!"

Dessa forma o compilador obriga a implementação do comportamento quando herda `Animal`.

## Diferença entre `virtual` e `= 0`
| Tipo de função         | Pode ser implementada? | Pode ser sobrescrita? | Classe instanciável? |
| ---------------------- | ---------------------- | --------------------- | -------------------- |
| `virtual void f()`     | ✅ sim                | ✅ sim                | ✅ sim              |
| `virtual void f() = 0` | ❌ não                | ✅ sim (obrigatório)  | ❌ não              |

Com a nova `class Animal` sendo abstrata, as `class Dog` e `class Cat` se mantêm inalteradas, contudo a classe base não poderá mais ser intanciada. 

```cpp
Animal a;                   // erro: classe abstrata
Animal *b = new Animal();   // também ocorre erro

Animal *d = new Dog();      // Ok! Classe abstrata servindo apeas de interface
Animal *c = new Cat();      // Ok! Classe abstrata servindo apeas de interface
```

Esse formato torna o código mais seguro e semântico, impedidno que alguém crie um objeto "incompleto". Portanto o objeto que serve como classe base passa a ser apenas o template, isto é, o modelo base para instanciar o objeto real, que herda os métodos base. Sendo assim, se torna essencial para design de grandes sistemas, em que classes abstratas servem de interfaces para camadas inteiras. 

_Exemplo_:
```cpp
void    listenToAnimal(const Animal &a) {
    a.makeSound();
}
```
Faz com que `listenToAnimal()` aceite qualquer tipo de `Animal`, sem que saiba qual é. Para isso é preciso garantir que todos os animais saibam "falar", uma vez que o compilador obriga a implementação de `makeSound()`.

## Quando usar classes Abstratas?
Use quando:
- Quiser definir um comportamento obrigatório, mas não a implementação;
- Fizer sentido tratar objetos diferentes de forma genérica (ex: `Animal`, `Shape`, `Form`, `Weapon`);
- Quiser criar um contrato de interface, mesmo sem código compartilhado

## Resumo 
| Conceito     | Símbolo | Instanciável | Obrigatório sobrescrever |
| ------------ | ------- | ------------ | ------------------------ |
| Método virtual | `virtual void f()` | ✅ | ❌ |
| Método puro virtual | `virtual void f() = 0` | ❌ | ✅ |
| Classe abstrata | tem pelo menos um método `= 0` | ❌ | ✅ |
