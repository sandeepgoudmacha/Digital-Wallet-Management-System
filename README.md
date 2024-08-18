# Digital-Wallet-Management-System
A Digital Wallet Management System is a software platform that allows users to manage their financial transactions digitally. It enables transferring and receiving funds, and viewing account balances. This system ensures secure, fast, and convenient transactions, streamlining financial management for users.

### Requirements :

List of users with their initial balances
List of transactions including adding funds.
### Results :

For each transaction, provide a confirmation of success or failure.
After completing all transactions, sort and display users based on leftover balance.
### Input Format

The first line contains an integer N, the number of users.

The next N lines each contain two integers: userID and balance, where userID is the user's identifier, and balance is the user's current balance.
The next line contains an integer T , the number of transactions.

The next T lines each contain three integers: from_userID, to_userID, amount, where from_userID and to_userID are the identifiers of the users involved in the transaction, amount is the amount transferred
### Constraints

1 ≤ N ≤ 100

1 ≤ userID ≤ 100

0 ≤ balance ≤ 10,000

1 ≤ T ≤ 1000

0 ≤ amount ≤ 10,000

### Output Format

For each transaction:

Print "Success" if the transaction was completed successfully.

Print "Failure" if the transaction failed
Print all users in sorted order based on their leftover balance

### Sample Input 0

4       
1 9000  
2 3000   
3 7500  
4 2000  

5        
1 2 1000  
3 4 3000  
2 3 500   
4 1 7500  
1 4 1500  
### Sample Output 0

Success   
Success   
Success   
Failure   
Success  

2 3500  
3 5000  
1 6500  
4 6500  
