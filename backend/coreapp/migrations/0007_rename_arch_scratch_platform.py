# Generated by Django 3.2.8 on 2021-10-14 17:44

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('coreapp', '0006_scratch_name_score_description'),
    ]

    operations = [
        migrations.RenameField(
            model_name='scratch',
            old_name='arch',
            new_name='platform',
        ),
    ]
