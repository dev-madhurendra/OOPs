'''
    1- Class is a user-define data type. It consist of data members and member function.
    2- Class gives the blueprint structure that how the memory will get allocated when object of class get created.
    3- In python for creating class we use keyword "class" along with the name of class what you want.
    1- Object is a real world entity which used to access class functionality.
    2- Memory gets allocated only when object get created.
'''


# Here we define a new class named "Bike"
class Bike:
    # This is data member/attribute of class.
    # This will get attached with every object of this class.
    speed = 32

    # This is member function of this class. 
    # In member function first parameter always reference to the object through which this member function is called.
    # Here I give name "self" reference to object, You can give any name what you want.
    def showVariable(self):

        # for accessing data members of object we need to use reference of that object
        print(self.speed) 
        print(self.mielage)


# This is how we create object of Class.
obj1 = Bike()

# We can also define some attribute of object like this. This attribute only belongs to only this object.
obj1.mielage = 13

# Here we call member function of class
obj1.showVariable()


# Here we created one more object of class First
obj2 = Bike()

'''
When we call this function of class using object "obj2" then you will get error because
in this function we try to print some attribute value which does not belong to object "obj2"
'''
obj2.showVariable()
