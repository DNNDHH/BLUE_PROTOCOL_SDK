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
	 * 		Name   -> Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Set Bg Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCommandMenuType                                 MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAnim                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_BgAnim_C::SetBgColor(ESBCommandMenuType MenuType, bool bAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Set Bg Color");
		
		UCommandMenu_BgAnim_C_SetBgColor_Params params {};
		params.MenuType = MenuType;
		params.bAnim = bAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommandMenu_BgAnim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Construct");
		
		UCommandMenu_BgAnim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.ExecuteUbergraph_CommandMenu_BgAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_BgAnim_C::ExecuteUbergraph_CommandMenu_BgAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.ExecuteUbergraph_CommandMenu_BgAnim");
		
		UCommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_BgAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_BgAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu_BgAnim.CommandMenu_BgAnim_C");
		return ptr;
	}

}


