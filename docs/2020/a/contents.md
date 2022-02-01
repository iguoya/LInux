# 秋季

秋风吹不尽，总是玉关情。

# My nifty title

Some **text**!

```{admonition} Here's my title
:class: warning

Here's my admonition content
```

## 二级标题

```{mermaid}

    sequenceDiagram
      participant Alice
      participant Bob
      Alice->John: Hello John, how are you?
```


### 三级标题


#### 四级标题


春季
========
```mermaid
classDiagram
      Animal <|-- Duck
      Animal <|-- Fish
      Animal <|-- Zebra
      Animal : +int age
      Animal : +String gender
      Animal: +isMammal()
      Animal: +mate()
      class Duck{
          +String beakColor
          +swim()
          +quack()
      }
      class Fish{
          -int sizeInFeet
          -canEat()
      }
      class Zebra{
          +bool is_wild
          +run()
      }
```
## uml: state diagram
```mermaid

   graph TB
     A --- B & C
     B --- D & E
     C --- F & G
     D -- left --- H
     D -- right --- J
     E -- left --- K
     E -- right --- L
     F -- left --- M
     F -- right --- N
     G -- left --- O
     G -- right --- P
```

春眠不觉晓，处处闻啼鸟。


```plantuml 

    '' This code is appended to the contents of basic.puml
    Goofy ->  MickeyMouse: calls
    Goofy <-- MickeyMouse: responds

```

@startuml component
actor client
node app
database db

db -> app
app -> client
@enduml





.. uml::

    Obj1 -> Obj2: Hello, world
    activate Obj2
    Obj2 --> Obj1: Goodbye, cruel world
    deactivate Obj2
春眠不觉晓，处处闻啼鸟。
