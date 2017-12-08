# Pizza
A program that uses a classed named Pizza to track the type, size, and toppings a user wants on his or her pizza.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/pizza.git
   ```
    or [download as ZIP](https://github.com/cramaechi/pizza/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd pizza
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./pizza
```

Sample Output:
```
-------------------------------------------------------------                                                         
|                      Pizza Types                          |                                                         
|                  ------------------                       |                                                         
|                     (4) Deep Dish                         |                                                         
|                     (5) Hand Tossed                       |                                                         
|                     (6) Pan                               |                                                         
|                                                           |                                                         
|                      Pizza Sizes                          |                                                         
|                   -----------------                       |                                                         
|                      (1) Small                            |                                                         
|                      (2) Medium                           |                                                         
|                      (3) Large                            |                                                         
|                                                           |                                                         
|                      Pizza Prices                         |                                                         
|         ----------------------------------------          |                                                         
|           Small pizza = $10 + $2 per topping              |                                                         
|           Medimum pizza = $14 + $2 per topping            |                                                         
|           Large pizza = $17 + $2 per topping              |                                                         
-------------------------------------------------------------                                                         
                                                                                                                      
What type of pizza would you like? 6                                                                                  
                                                                                                                      
What size of pizza? 3                                                                                                 
                                                                                                                      
How many toppings altogether? 16
                                                                                                                      
Your pizza type: Pan                                                                                                  
Your pizza size: Large                                                                                                
Your pizza cost: $49.00
```
