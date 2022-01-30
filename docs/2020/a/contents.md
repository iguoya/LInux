# 秋季

秋风吹不尽，总是玉关情。

## 二级标题


### 三级标题


#### 四级标题


春季
========

### uml: class diagram
```plantuml
@startuml
package "customer domain" #DDDDDD {
    class Contact {
        + email
        + phone
    }

    class Address {
        + address1
        + address2
        + city
        + region
        + country
        + postalCode
        + organization
    }

    note right of Address 
        There are two types of 
        addresses: billing and shipping
    end note

    class Customer {
    }

    Customer *-- Contact
    Customer *-- ShippingAddress
    Customer *-- BillingAddress
    Customer *--{ SalesOrder

    class ShippingAddress <<Address>>
    class BillingAddress <<Address>>
    class SalesOrder {
        + itemDescription
        + itemPrice
        + shippingCost
        + trackingNumber
        + shipDate
    }
}
@enduml
```
## uml: state diagram
```plantuml
@startuml
scale 600 width
skinparam backgroundColor #FFEBDC
[*] -> Begin
Begin -right-> Running : Succeeded
Begin --> [*] : Aborted
state Running {
  state "The game runneth" as long1
  long1 : Until you die
  long1 --> long1 : User interaction
  long1 --> keepGoing : stillAlive
  keepGoing --> long1
  long1 --> tooBadsoSad : killed
  tooBadsoSad --> Dead : failed
}
Dead --> [*] : Aborted
@enduml
```
```plantuml
@startuml
    skinparam backgroundColor #EEEBDC
    skinparam handwritten true
    actor Customer
    Customer -> "login()" : username & password
    "login()" -> Customer : session token
    activate "login()"
    Customer -> "placeOrder()" : session token, order info
    "placeOrder()" -> Customer : ok
    Customer -> "logout()"
    "logout()" -> Customer : ok
    deactivate "login()"
@enduml
```

```plantuml source="basic.puml"
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


@startuml
'!include ../../plantuml-styles/plantuml-ae.iuml

skinparam Shadowing false

skinparam ArrowFontStyle normal
skinparam ArrowFontName Courier
skinparam ArrowFontSize 10

title Arrows in Use Case diagrams\n


(Manage Users) -up-|> (Management): This arrow is -up-|>

:All Users:      as allUsers #violet
:Main Admin:     as Admin    #saddleBrown
:User:           as U        #tan
:System Manager: as manager

Admin   -up-|>    allUsers: This arrow is -up->
manager -right-|> allUsers: This arrow is -right-|>
U       -|>       allUsers: This arrow is -|>

Admin --> U:    This arrow is -->
Admin <.....> U: This arrow is <.....>

Admin   -[#blue]->    (Manage Users): This arrow is -[#blue]->
manager -[#blue]->> (Manage Users): This arrow is -[#blue]->>


'!include ../../plantuml-styles/ae-copyright-footer.txt
@enduml



@startuml
'!include ../../plantuml-styles/plantuml-ae.iuml

skinparam ActorBorderColor   SaddleBrown
skinparam NoteFontStyle normal
skinparam Shadowing false


title Usecase Diagrams: Connecting Notes to Objects

(Use the application) as (Use)

User -[#LightSlateGray]-> (Start)
User -[#LightSlateGray]-> (Use)

note "This note is connected to \n two use cases \n and the User actor."  as N2  #white

(Start) <<-[#orange]- N2
N2 .[#magenta].|> (Use)
User <==[#DeepSkyBlue]==> N2

'!include ../../plantuml-styles/ae-copyright-footer.txt
@enduml

.. uml::
    Obj1 -> Obj2: Hello, world
    activate Obj2
    Obj2 --> Obj1: Goodbye, cruel world
    deactivate Obj2
春眠不觉晓，处处闻啼鸟。
