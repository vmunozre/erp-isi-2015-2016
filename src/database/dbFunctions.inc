<?php

/* 
 * ERP-ISI-2015-2016
 * 
 *   This file is part of ERP-ISI-2015-2016.
 * 
 *     ERP-ISI-2015-2016 is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 * 
 *     ERP-ISI-2015-2016 is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with ERP-ISI-2015-2016.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *  @license     http://www.gnu.org/licenses/gpl.txt
 *  @source code https://github.com/jmcolmenar/erp-isi-2015-2016
 */

include_once 'dbAccess.inc';
include_once 'ProductsSqliteUtils.inc';

ProductsSqliteUtils::init();

function check_login($user, $pass) {
    $db = new DbAccess();
    
    if ($db->isUser($user,$pass)) {
        return true;
    } else {
        return false;
    }
}

function productsListOrderBy($sortRule) {
    return ProductsSqliteUtils::fetchProductsOrderedBy($sortRule);
}

function productsList() {
    return ProductsSqliteUtils::fetchProducts();
}

function addProduct($name,$price) {
    return ProductsSqliteUtils::insertProduct($name,$price);
}

function modifyProduct($idp,$name,$price) {
    return ProductsSqliteUtils::updateProduct($idp,$name,$price);
}

function removeProduct($idp) {
    return ProductsSqliteUtils::deleteProduct($idp);
}