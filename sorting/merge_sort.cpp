### Interview Comparison

| Algorithm      | Usually Recursive? | Can be Iterative?            |
| -------------- | ------------------ | ---------------------------- |
| Bubble Sort    | ❌ No               | ✅ Yes                        |
| Selection Sort | ❌ No               | ✅ Yes                        |
| Insertion Sort | ❌ No               | ✅ Yes                        |
| Quick Sort     | ✅ Yes              | ✅ Yes (using stack)          |
| Merge Sort     | ✅ Yes              | ✅ Yes (Bottom-Up Merge Sort) |




Name	             Best Case  	Average Case   	Worst Case  	Memory      	Stable   	Method Used
Quick Sort	            n log n 	  n log n	     n^{2}		    log n             No          Partitioning
Merge Sort	            n log n	      n log n   	 n log n	       n              Yes         Merging
Heap Sort	            n log n	      n log n	     n log n		   1              No	      Selection
Insertion Sort	        n             n^{2}  		 n^{2}             1              Yes         Insertion
Tim Sort				n             n log n        n log n           n              Yes         Insertion & Merging
Selection Sort	        n^{2} 	      n^{2}	         n^{2}	           1	          No          Selection
Shell Sort	            n log n       n^{4/3}	     n^{3/2}	       1	          No          Insertion
Bubble Sort             n   	      n^{2}	         n^{2}	           1	          Yes	      Exchanging
Cycle Sort	            n^{2}	      n^{2}	         n^{2}	           1	          No	      Selection