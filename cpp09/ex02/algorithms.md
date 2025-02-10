# Insertion Sort
## Nasıl Çalışır
Insertion sort, dizinin elemanlarını birer birer alarak doğru konumlarına yerleştirir. Her adımda, dizinin sol tarafındaki alt dizi sıralanmış olur.

### Örnek
Dizi: `[5, 2, 4, 6, 1, 3]`

1. Adım 1: 2'yi al ve sıralanmış alt diziye yerleştir: `[2, 5, 4, 6, 1, 3]`
2. Adım 2: 4'ü al ve sıralanmış alt diziye yerleştir: `[2, 4, 5, 6, 1, 3]`
3. Adım 3: 6'yı al ve sıralanmış alt diziye yerleştir(değişiklik yapılmaz): `[2, 4, 5, 6, 1, 3]`
4. Adım 4: 1'i al ve sıralanmış alt diziye yerleştir: `[1, 2, 4, 5, 6, 3]`
5. Adım 5: 3'ü al ve sıralanmış alt diziye yerleştir: `[1, 2, 3, 4, 5, 6]`

## Algoritma Kodu

```cpp
for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
}
```

### Kullanım Alanları: 
Küçük diziler için veya kısmen sıralanmış diziler için etkilidir.

# Bubble Sort
## Nasıl Çalışır
Bubble sort, ardışık elemanları karşılaştırarak ve gerektiğinde yer değiştirerek diziyi sıralar. Bu işlem, dizinin sonuna kadar tekrar eder.

### Örnek
Dizi: `[5, 2, 4, 6, 1, 3]`

1. Adım 1: 5 ve 2'yi karşılaştır ve değiştir: `[2, 5, 4, 6, 1, 3]`
2. Adım 2: 5 ve 4'ü karşılaştır ve değiştir: `[2, 4, 5, 6, 1, 3]`
3. Adım 3: 6 ve 1'i karşılaştır ve değiştir: `[2, 4, 5, 1, 6, 3]`
4. Adım 4: 6 ve 3'ü karşılaştır ve değiştir: `[2, 4, 5, 1, 3, 6]`
5. Adım 5: Aynı işlemleri kalan elemanlar için tekrar et: `[1, 2, 3, 4, 5, 6]`

## Algoritma Kodu

```cpp
for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
        if (arr[j] > arr[j + 1]) {
            std::swap(arr[j], arr[j + 1]);
        }
    }
}

```
Kullanım Alanları: Basitliği nedeniyle eğitim amaçlı ve küçük veri kümelerinde kullanılır.

# Selection Sort
## Nasıl Çalışır
Selection sort, her adımda en küçük (veya en büyük) elemanı seçer ve doğru konumuna yerleştirir.

### Örnek
Dizi: `[5, 2, 4, 6, 1, 3]`

1. Adım 1: En küçük eleman 1'i bul ve yer değiştir: `[1, 2, 4, 6, 5, 3]`
   - En küçük elemanı bulmak için diziyi tarar ve 1'i bulur. 5 ile yer değiştirir.
2. Adım 2: En küçük eleman 2'yi bul ve yer değiştir: `[1, 2, 4, 6, 5, 3]`
   - 2 zaten doğru konumda olduğundan bir işlem yapılmaz.
3. Adım 3: En küçük eleman 3'ü bul ve yer değiştir: `[1, 2, 3, 6, 5, 4]`
   - Kalan diziyi tarar ve 3'ü bulur. 6 ile yer değiştirir.
4. Adım 4: En küçük eleman 4'ü bul ve yer değiştir: `[1, 2, 3, 4, 5, 6]`
   - Kalan diziyi tarar ve 4'ü bulur. 6 ile yer değiştirir.

## Algoritma Kodu

```cpp
for (int i = 0; i < n - 1; ++i) {
    int min_idx = i;
    for (int j = i + 1; j < n; ++j) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
        }
    }
    // En küçük elemanı i. konumla değiştirir
    std::swap(arr[min_idx], arr[i]);
}

```
### Kullanım Alanları:
 Küçük veri kümelerinde kullanılır ve bellek erişim sayısı düşüktür.

# Merge Sort
## Nasıl Çalışır
Merge sort, diziyi iki alt diziye böler, bu alt dizileri ayrı ayrı sıralar ve sonra birleştirir (merge).

### Örnek
Dizi: `[5, 2, 4, 6, 1, 3]`

1. Adım 1: Diziyi ikiye böl: `[5, 2, 4]` ve `[6, 1, 3]`
2. Adım 2: Alt dizileri sıralar: `[2, 4, 5]` ve `[1, 3, 6]`
3. Adım 3: Alt dizileri birleştirir: `[1, 2, 3, 4, 5, 6]`

## Algoritma Kodu

```cpp
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Geçici diziler oluştur
    int L[n1], R[n2];

    // Verileri geçici dizilere kopyala
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Geçici dizileri birleştir
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Kalan elemanları kopyala
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        // İki yarıyı ayrı ayrı sıralar
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // İki yarıyı birleştirir
        merge(arr, l, m, r);
    }
}


```
### Kullanım Alanları:
 Büyük veri kümelerinde etkilidir ve sabit zamanda sıralama garantisi verir.

# Quick Sort
## Nasıl Çalışır
Quick sort, bir pivot seçer ve diziyi bu pivot etrafında böler (partition). Sonra her iki alt diziyi ayrı ayrı sıralar.

### Örnek
Dizi: `[5, 2, 4, 6, 1, 3]`

1. Adım 1: Pivot seç (örneğin 4), diziyi pivot etrafında böler: `[2, 1, 3]` ve `[5, 6]`
2. Adım 2: Alt dizileri sıralar: `[1, 2, 3]` ve `[5, 6]`
3. Adım 3: Alt dizileri birleştirir: `[1, 2, 3, 4, 5, 6]`

## Algoritma Kodu

```cpp
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot eleman
    int i = (low - 1); // küçük eleman indeksi

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

```
### Kullanım Alanları:
 Genel amaçlı sıralama algoritmasıdır ve genellikle en hızlı sıralama algoritmalarından biridir.

# Heap Sort
## Nasıl Çalışır
Heap sort, bir binary heap veri yapısı kullanarak diziyi sıralar. Önce max-heap oluşturulur, sonra elemanlar tek tek çıkarılır ve sıralanır.

### Örnek
Dizi: `[5, 2, 4, 6, 1, 3]`

1. Adım 1: Max-heap oluştur: `[6, 5, 4, 2, 1, 3]`
2. Adım 2: Max-heap'ten en büyük elemanı çıkar ve sıralı bir şekilde dizinin sonuna yerleştir: `[1, 2, 3, 4, 5, 6]`

## Algoritma Kodu

```cpp
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSort(int arr[], int n) {
    buildMaxHeap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

```
### Kullanım Alanları:
 Sabit zaman karmaşıklığı ile büyük veri kümeleri için etkilidir
# Radix Sort
## Nasıl Çalışır
Radix sort, rakam (digit) bazında sıralama yapar. Elemanları en düşük basamaktan başlayarak sıralar.

### Örnek
Dizi: `[170, 45, 75, 90, 802, 24, 2, 66]`

1. Adım 1: Birlik basamağına göre sırala: `[170, 90, 802, 2, 24, 45, 75, 66]`
2. Adım 2: Onluk basamağına göre sırala: `[802, 2, 24, 45, 66, 170, 75, 90]`
3. Adım 3: Yüzlük basamağına göre sırala: `[2, 24, 45, 66, 75, 90, 170, 802]`

## Algoritma Kodu

```cpp
int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(int arr[], int n, int exp) {
    int output[n]; 
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n) {
    int m = getMax(arr, n);

    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

```

### Kullanım Alanları:
 Belli uzunluktaki tamsayı dizilerini sıralamak için etkilidir.

# Algoritmaların Kıyaslaması ve Kullanım Alanları

Her bir sıralama algoritmasının kendine özgü avantajları ve dezavantajları vardır. İşte bu algoritmaların kullanım alanları ve birbirlerine göre avantajları:

1. **Insertion Sort**
   - **Kullanım Alanları**: Küçük veya kısmen sıralanmış dizilerde etkilidir, ancak genel kullanımda diğer sıralama algoritmalarına göre daha yavaş olabilir.
   - **Avantajları**: Basitliği ve kısmen sıralanmış dizilerdeki performansı nedeniyle tercih edilir.
   - **Dezavantajları**: Yavaş olabilir.

2. **Bubble Sort**
   - **Kullanım Alanları**: Basitliği nedeniyle eğitim amaçlı ve küçük veri kümelerinde kullanılır.
   - **Avantajları**: Basit ve anlaşılır.
   - **Dezavantajları**: Genellikle diğer algoritmalardan daha yavaştır.

3. **Selection Sort**
   - **Kullanım Alanları**: Bellek erişim sayısı düşük olduğundan küçük veri kümelerinde kullanılır.
   - **Avantajları**: Basit ve az bellek kullanır.
   - **Dezavantajları**: Genellikle daha büyük veri kümeleri için uygun değildir.

4. **Merge Sort**
   - **Kullanım Alanları**: Büyük veri kümelerinde ve sabit zamanda sıralama garantisi gereken durumlarda etkilidir.
   - **Avantajları**: Kararlıdır ve sabit zamanda sıralama garantisi verir.
   - **Dezavantajları**: Ek bellek kullanımı gerektirir.

5. **Quick Sort**
   - **Kullanım Alanları**: Genel amaçlı sıralama algoritmasıdır ve genellikle en hızlı sıralama algoritmalarından biridir.
   - **Avantajları**: Hızlıdır ve geniş bir kullanım alanına sahiptir.
   - **Dezavantajları**: En kötü durumda O(n^2) karmaşıklığı olabilir.

6. **Heap Sort**
   - **Kullanım Alanları**: Sabit zamanda sıralama garantisi ile büyük veri kümeleri için etkilidir.
   - **Avantajları**: Sabit zamanda sıralama garantisi verir.
   - **Dezavantajları**: Dizi üzerinde fazladan alan gerektirir.

7. **Radix Sort**
   - **Kullanım Alanları**: Belli uzunluktaki tamsayı dizilerini sıralamak için etkilidir.
   - **Avantajları**: Belirli türdeki veriler için çok hızlı olabilir.
   - **Dezavantajları**: Yalnızca belirli türdeki veriler için uygundur.

Bu sıralama algoritmalarının her biri, belirli durumlar için en uygun olanıdır. Örneğin, küçük ve kısmen sıralanmış diziler için Insertion Sort tercih edilebilirken, büyük veri kümeleri için Merge Sort veya Quick Sort daha uygun olabilir.
