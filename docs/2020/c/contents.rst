春季
========
.. mermaid::

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
春眠不觉晓，处处闻啼鸟。

.. uml:: 
   
   @startuml
   user -> (use PlantUML)

   note left of user
      Hello!   
   end note
   @enduml


.. uml:: 

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


.. uml:: 

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


.. mermaid::

   sequenceDiagram
     participant Alice
     participant Bob
     Alice->John: Hello John, how are you?
     loop Healthcheck
       John->John: Fight against hypochondria
     end
     Note right of John: Rational thoughts <br/>prevail...
     John-->Alice: Great!
     John->Bob: How about you?
     Bob-->John: Jolly good!