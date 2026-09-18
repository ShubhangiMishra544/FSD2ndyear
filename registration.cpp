<!DOCTYPE html>
<html>
<head>
    <title>Registration Form</title>
</head>
<body>

<form>
    <label>FName:</label>
    <input type="text" name="fname" value="Sumit">
    <br><br>

    <label>LName:</label>
    <input type="text" name="lname" value="Agarwal">
    <br><br>

    <label>Gender:</label>
    <input type="radio" name="gender" value="male" checked> Male
    <input type="radio" name="gender" value="female"> Female
    <br><br>

    <label>Qualification:</label>
    <input type="checkbox" name="qualification" value="UG"> Under Graduate
    <input type="checkbox" name="qualification" value="Graduate"> Graduate
    <input type="checkbox" name="qualification" value="PG" checked> Post Graduate
    <br><br>

    <label>Address:</label>
    <textarea name="address">ABES College</textarea>
    <br><br>

    <label>Country:</label>
    <select name="country">
        <option value="India">India</option>
    </select>
    <br><br>

    <label>Number:</label>
    <input type="text" name="number" value="5645345342">
    <br><br>

    <input type="submit" value="Submit">
    <input type="reset" value="Reset">

</form>

</body>
</html>