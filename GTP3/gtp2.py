import random as r

PRODUCTOS = ["Yogurt - Plain", "Juice - V8 Splash", "Dehydrated Kelp Kombo", "Banana - Green", "Nantuket Peach Orange", "Sage Ground Wiberg", "Tortillas - Flour, 8", "Beans - Turtle, Black, Dry", "Appetizer - Chicken Satay", "Kiwano", "Napkin Colour", "Soy Protein", "Clam Nectar", "Duck - Breast", "Shrimp - Black Tiger 8 - 12", "Chicken Thigh - Bone Out", "Flour - Whole Wheat", "Nantucket Orange Juice", "Raspberries - Frozen", "Kahlua", "Cookie Choc", "Squid - Breaded", "Mushroom - Porcini Frozen", "Wine - Conde De Valdemar", "Beer - Blue", "Chicken - Whole", "Vacuum Bags 12x16", "Appetizer - Cheese Bites", "Potato - Sweet", "Energy Drink - Redbull 355ml", "Pate - Peppercorn", "Oil - Food, Lacquer Spray", "Club Soda - Schweppes, 355 Ml", "Oil - Peanut", "Chambord Royal", "Wine - Stoneliegh Sauvignon", "Everfresh Products", "Bar Mix - Lime", "Syrup - Monin, Swiss Choclate", "Ham - Procutinni", "Yeast - Fresh, Fleischman", "Cotton Wet Mop 16 Oz", "Beans - Green", "Wine - Chardonnay Mondavi", "Ginger - Ground", "Cheese - Brie Roitelet", "Juice Peach Nectar", "Beer - Blue", "Bread - Wheat Baguette", "Towel Multifold", "Yogurt - Blueberry, 175 Gr", "Pepper - Paprika, Hungarian", "Soup - Campbells Chili", "Burger Veggie", "Water - Perrier", "Water - Evian 355 Ml", "Bandage - Fexible 1x3", "Pancetta", "Vol Au Vents", "Compound - Raspberry", "Pesto - Primerba, Paste", "Wine - Touraine Azay - Le - Rideau", "Spoon - Soup, Plastic", "Wine - Toasted Head", "Arrowroot", "Ecolab Crystal Fusion", "Cheese - Cheddar, Mild", "Snails - Large Canned", "Swiss Chard - Red", "Veal - Striploin", "Dates", "Chocolate Bar - Smarties", "Extract - Raspberry", "Soup - Boston Clam Chowder", "Gatorade - Cool Blue Raspberry", "Wine - Mas Chicet Rose, Vintage", "Fond - Chocolate", "Coffee - Cafe Moreno", "Cheese - Comte", "Cup - 4oz Translucent", "Fudge - Cream Fudge", "Beans - Fava Fresh", "Table Cloth 62x120 Colour", "Coffee Cup 8oz 5338cd", "Wine - Niagara Peninsula Vqa", "Flour - Corn, Fine", "Pork - Inside", "Wine - Sake", "Flower - Leather Leaf Fern", "Broom - Corn", "Nori Sea Weed", "Tuna - Fresh", "Wine - Sauvignon Blanc", "Maple Syrup", "Wine - White, Chardonnay", "Corn - Mini", "Tomatoes - Grape", "Bread - White, Unsliced", "Mushroom - Enoki, Dry", "Pastry - Banana Muffin - Mini"]

class Producto:
        desc:str
        stock:int
        venc:int

        def __init__(self, desc:str, stock:int, venc:int):
                self.desc = desc
                self.stock = stock
                self.venc = venc

        def __repr__(self) -> str:
                return f"Descripción: {self.desc}\nStock: {self.stock}\nVencimiento: {self.venc}"

def eliminar(pr:list[Producto], cantidad:int) -> int:
        i = 0
        while i < cantidad:
                if pr[i].venc < 2023:
                        pr[i] = pr[cantidad-1]
                        i -= 1
                        cantidad -= 1
                i += 1

        return cantidad

def main():
        cantidad:int = int(input("Ingrese la cantidad de productos: "))

        pr:list[Producto] = [Producto(r.choice(PRODUCTOS), r.randint(1,20), r.randint(2020, 2026)) for n in range(cantidad)]

        cantidad = eliminar(pr, cantidad)
        print("Se eliminaron los productos vencidos")

        for i in range(cantidad):
                print(pr[i])
                print()

if __name__ == '__main__':
        main()