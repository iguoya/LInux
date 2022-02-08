.PHONY: clean All

All:
	@echo "----------Building project:[ 14-glade_only_window - Debug ]----------"
	@cd "14-glade_only_window" && "$(MAKE)" -f  "14-glade_only_window.mk"
clean:
	@echo "----------Cleaning project:[ 14-glade_only_window - Debug ]----------"
	@cd "14-glade_only_window" && "$(MAKE)" -f  "14-glade_only_window.mk" clean
