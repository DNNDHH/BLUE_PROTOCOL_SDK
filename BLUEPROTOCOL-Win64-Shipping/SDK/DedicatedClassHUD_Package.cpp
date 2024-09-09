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
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.UnregistClassHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UDedicatedClassHUD_C::UnregistClassHud(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.UnregistClassHud");
		
		UDedicatedClassHUD_C_UnregistClassHud_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.LoadSavePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDedicatedClassHUD_C::LoadSavePosition(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.LoadSavePosition");
		
		UDedicatedClassHUD_C_LoadSavePosition_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.RegistWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDedicatedClassHUD_C::RegistWidget(class UUserWidget* Widget, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.RegistWidget");
		
		UDedicatedClassHUD_C_RegistWidget_Params params {};
		params.Widget = Widget;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UDedicatedClassHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.Construct");
		
		UDedicatedClassHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.RegistClassHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDedicatedClassHUD_C::RegistClassHud(class UUserWidget* Widget, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.RegistClassHud");
		
		UDedicatedClassHUD_C_RegistClassHud_Params params {};
		params.Widget = Widget;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.OnUpdateHudLayout
	 * 		Flags  -> ()
	 */
	void UDedicatedClassHUD_C::OnUpdateHudLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.OnUpdateHudLayout");
		
		UDedicatedClassHUD_C_OnUpdateHudLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DedicatedClassHUD.DedicatedClassHUD_C.ExecuteUbergraph_DedicatedClassHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDedicatedClassHUD_C::ExecuteUbergraph_DedicatedClassHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DedicatedClassHUD.DedicatedClassHUD_C.ExecuteUbergraph_DedicatedClassHUD");
		
		UDedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDedicatedClassHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDedicatedClassHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DedicatedClassHUD.DedicatedClassHUD_C");
		return ptr;
	}

}


