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
	 * 		Name   -> Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.InAnimation
	 * 		Flags  -> ()
	 */
	void UCommandMenu_SubMenuLine_C::InAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.InAnimation");
		
		UCommandMenu_SubMenuLine_C_InAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_SubMenuLine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.PreConstruct");
		
		UCommandMenu_SubMenuLine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.SetBtnNumSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_SubMenuLine_C::SetBtnNumSwitch(int32_t BtnNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.SetBtnNumSwitch");
		
		UCommandMenu_SubMenuLine_C_SetBtnNumSwitch_Params params {};
		params.BtnNum = BtnNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.ExecuteUbergraph_CommandMenu_SubMenuLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_SubMenuLine_C::ExecuteUbergraph_CommandMenu_SubMenuLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.ExecuteUbergraph_CommandMenu_SubMenuLine");
		
		UCommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_SubMenuLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_SubMenuLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C");
		return ptr;
	}

}


