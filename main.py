import heapq

def dijkstra(graph, start):
    # Inisialisasi jarak awal ke semua node sebagai tak terbatas, kecuali node awal
    distances = {node: float('infinity') for node in graph}
    distances[start] = 0

    # Buat antrian prioritas dan masukkan node awal dengan jarak 0
    priority_queue = [(0, start)]

    while priority_queue:
        # Ambil node dengan jarak terpendek dari antrian prioritas
        current_distance, current_node = heapq.heappop(priority_queue)

        # Skip jika kita sudah menemukan jarak yang lebih pendek
        if current_distance > distances[current_node]:
            continue

        # Iterasi melalui tetangga node saat ini
        for neighbor, weight in graph[current_node].items():
            distance = current_distance + weight

            # Jika jarak baru lebih pendek, perbarui jarak dan masukkan ke dalam antrian prioritas
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(priority_queue, (distance, neighbor))

    return distances

# Contoh penggunaan
graph = {
    'A': {'B': 3, 'C': 2, 'D': 5},
    'B': {'E': 2,},
    'C': {'E': 2,},
    'D': {'E': 1,},
    'E': {'F': 2, 'G': 3},
    'F': {'I': 3, 'H': 4},
    'G': {'H': 2},
    'I': {'J': 2,},
    'H': {'I': 4, 'J': 5},
    'J': {'I': 2, 'H': 5},
}
start_node = 'A'

result = dijkstra(graph, start_node)
print(result)
