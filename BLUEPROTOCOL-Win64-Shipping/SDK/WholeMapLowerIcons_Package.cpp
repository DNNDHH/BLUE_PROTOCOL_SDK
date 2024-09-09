/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapLowerIcons.WholeMapLowerIcons_C.OnCreateWarpPointExIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PortalName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWholeMapLowerIcons_C::OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapLowerIcons.WholeMapLowerIcons_C.OnCreateWarpPointExIcon");
		
		UWholeMapLowerIcons_C_OnCreateWarpPointExIcon_Params params {};
		params.LevelName = LevelName;
		params.PortalName = PortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapLowerIcons.WholeMapLowerIcons_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 IconWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapLowerIcons_C::AddIcon(class UClass* Class, int32_t ZOrder, class UUserWidget** IconWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapLowerIcons.WholeMapLowerIcons_C.AddIcon");
		
		UWholeMapLowerIcons_C_AddIcon_Params params {};
		params.Class = Class;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconWidget != nullptr)
			*IconWidget = params.IconWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWholeMapLowerIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWholeMapLowerIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WholeMapLowerIcons.WholeMapLowerIcons_C");
		return ptr;
	}

}


