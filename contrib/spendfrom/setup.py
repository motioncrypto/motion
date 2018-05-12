from distutils.core import setup
setup(name='XMNspendfrom',
      version='1.0',
      description='Command-line utility for motion "coin control"',
      author='Gavin Andresen',
      author_email='gavin@motionfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
