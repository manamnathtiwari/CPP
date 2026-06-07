# Two Pointers - The Mental Model I Never Want to Forget

> If I see `n <= 2e5` and I start writing nested loops, I should immediately ask:
>
> **Can sorting + two pointers solve this?**

---

# 1. What Problem Does Two Pointers Solve?

Brute force:

```cpp
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        // check pair
    }
}
```

Complexity:

```text
O(n²)
```

For:

```cpp
n = 200000
```

This is impossible.

Two pointers helps us avoid checking every pair individually.

---

# 2. The Core Idea

Imagine a sorted array:

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
```

Instead of checking every pair, keep two pointers:

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
         L               R
```

```cpp
int left = 0;
int right = n - 1;
```

---

# 3. The Golden Rule

Every two pointer problem asks:

```text
If condition is TRUE -> which pointer moves?
If condition is FALSE -> which pointer moves?
```

That's it.

---

# 4. Pair of Topics Example

After math simplification:

```cpp
diff[i] = a[i] - b[i];
```

Condition becomes:

```cpp
diff[i] + diff[j] > 0
```

Sort:

```text
[-2, -1, 0, 3, 5]
```

---

# 5. Animation of the Algorithm

Initial State

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
         L               R
```

Check:

```text
-2 + 5 = 3
```

Positive.

Now the BIG observation:

If

```text
-2 + 5 > 0
```

Then automatically:

```text
-1 + 5 > 0
 0 + 5 > 0
 3 + 5 > 0
```

also work.

So we instantly count:

```text
(-2,5)
(-1,5)
(0,5)
(3,5)
```

Total:

```cpp
right - left
= 4
```

Code:

```cpp
ans += (right - left);
right--;
```

---

# Animation Step 2

Move right.

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
         L           R
```

Check:

```text
-2 + 3 = 1
```

Positive.

Again:

```text
(-2,3)
(-1,3)
(0,3)
```

Count:

```cpp
ans += 3;
```

Move:

```cpp
right--;
```

---

# Animation Step 3

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
         L       R
```

Check:

```text
-2 + 0 = -2
```

Not positive.

Question:

Can -2 work with any remaining element?

```text
-2 + 0  = -2
-2 + -1 = -3
```

No.

Therefore:

```text
-2 is useless now.
```

Move:

```cpp
left++;
```

---

# Animation Step 4

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
             L   R
```

Check:

```text
-1 + 0 = -1
```

Still bad.

Move:

```cpp
left++;
```

Now:

```text
Index : 0   1   2   3   4
Value : -2 -1   0   3   5
                 L
                 R
```

Stop.

```cpp
left < right
```

is no longer true.

---

# 6. Why Does Sorting Matter?

Without sorting:

```text
3 -2 5 -1 0
```

You know nothing.

With sorting:

```text
-2 -1 0 3 5
```

You know:

```text
Everything on the right is bigger.
Everything on the left is smaller.
```

This information allows pointer movement.

---

# 7. Opposite Direction Two Pointers

Most common.

```cpp
sort(v.begin(),v.end());

int left = 0;
int right = n - 1;

while(left < right){

    if(condition){
        right--;
    }
    else{
        left++;
    }
}
```

Used in:

- Pair Sum
- Count Pairs
- 3Sum
- Pair of Topics
- Valid Triangle Number

---

# 8. Sliding Window (Also Two Pointers)

```cpp
int left = 0;

for(int right=0; right<n; right++){

    while(window_is_invalid){
        left++;
    }
}
```

Used in:

- Longest Subarray
- Shortest Subarray
- Maximum Length Problems
- Minimum Window Problems

---

# 9. Contest Recognition Checklist

When I see:

```cpp
n <= 200000
```

I ask:

### Am I generating all pairs?

If yes:

```text
Probably Wrong
```

### Am I writing O(n²)?

If yes:

```text
Look for sorting.
Look for binary search.
Look for two pointers.
```

### Can the array be sorted?

If yes:

```text
Think Two Pointers.
```

---

# 10. The Mental Model

Imagine:

```text
left  = weakest player
right = strongest player
```

If

```text
weakest + strongest
```

wins,

then everyone stronger than the weakest also wins with the strongest.

Count them all at once.

If

```text
weakest + strongest
```

loses,

then the weakest player is hopeless.

Remove him.

That is exactly what the two pointer algorithm is doing.

---

# Final Rule

Whenever I write:

```cpp
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        ...
    }
}
```

and

```cpp
n = 2 * 10^5
```

I stop and ask:

> Can sorting + two pointers eliminate this nested loop?

Many Codeforces problems are solved by answering YES.
