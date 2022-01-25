(defun its-bit (bit1 &optional bit2)
  (let* ((x1 (round bit1 .1))
         (x2 (mod x1 10))
         (x3 (1- (/ x1 10)))
         (x4 (- 36 x2 (* 9 x3))))
    (if bit2
        (list x4 (its-bit bit2))
        x4)))
