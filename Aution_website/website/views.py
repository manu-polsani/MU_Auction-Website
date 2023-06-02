

from flask import Blueprint, render_template, request, flash, jsonify
from flask_login import login_required, current_user
from . import db

views = Blueprint('views', __name__)
# @views.route('/')
# # 
# def home():
#     return "<h1>Test</h1>"

@views.route('/', methods=['GET', 'POST'])
@views.route('/home.html', methods=['GET', 'POST'])
@login_required
def home():
    return render_template("home.html", user=current_user)

@views.route('/Laptops.html')
@login_required
def Laptops():
    return render_template("Laptops.html",user=current_user)

@views.route('/phones.html')
@login_required
def phones():
    return render_template("phones.html",user=current_user)

@views.route('/submit1.html')
@login_required
def submit1():
    return render_template("submit1.html",user=current_user)

@views.route('/watches.html')
@login_required
def watches():
    return render_template("watches.html",user=current_user)

@views.route('/powerBank.html')
@login_required
def powerBank():
    return render_template("powerBank.html",user=current_user)

@views.route('/phoneCharger.html')
@login_required
def phoneCharger():
    return render_template("phoneCharger.html",user=current_user)

@views.route('/headphone.html')
@login_required
def headphone():
    return render_template("headphone.html",user=current_user)