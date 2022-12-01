# Write your MySQL query statement below
SELECT Person.firstName, Person.lastName, Address.city, Address.state
from Person LEFT JOIN Address
ON Address.personID = Person.personID