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