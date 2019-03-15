# Command Pattern
# Goals: Overall problems solved by command pattern
    * Store commands as objects that can modify an integer stack
    * Invoker takes in a container with postfix expression
    * Invoker prepares a stack of ints that commands are run on
    * Invoker scans postfix expression for commands and prepares queue of commands for use on integer stack
    * Command list prepared and sent to final calculator object to use. This can be sent to STDOUT or other tooltip style objects.
## GOAL: Store commands as objects 
## INPUT: Postfix Expression Container
## OUTPUT: integer stack ready to receive command operations.   Command queue . 
## Methodology: In short, scan postfix. generate command queue. generate integer stack.
   # Scanning step 1: Read through postfix expression(stack probably)
     # st2: if number push into temp stack. if operation push into other temp stack.
     # st3: assess that # numbers > than # operations, else invalid postfix expression
     # st4: Once temp stacks are filled, they will be emptied into final stacks for transportation. This effectively reverses the stacks.
