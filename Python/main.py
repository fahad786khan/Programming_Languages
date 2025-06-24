class Character:
    def __init__(self, health, damage, speed):
        self.health = health
        self.damage = damage
        self.speed = speed
    def double_speed(self):
        self.speed *= 2
        
warrior = Character(65, 34 , 42)
ninja = Character(34,85,95)
        
print(f"Warrior speed : {warrior.speed}")
print(f"Ninja speed : {ninja.speed}")

warrior.double_speed()

print(f"Warrior speed : {warrior.speed}")
print(f"Ninja speed : {ninja.speed}")