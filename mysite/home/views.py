from django.shortcuts import render

# Create your views here.
def index(request):
    ctxt = {}
    return render(request, "home/index.html", ctxt)