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
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.SetDisp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTextWindowDemo_C::SetDisp(bool IsDisp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.SetDisp");
		
		UTextWindowDemo_C_SetDisp_Params params {};
		params.IsDisp = IsDisp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.IsShow
	 * 		Flags  -> ()
	 */
	bool UTextWindowDemo_C::IsShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.IsShow");
		
		UTextWindowDemo_C_IsShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.Construct
	 * 		Flags  -> ()
	 */
	void UTextWindowDemo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.Construct");
		
		UTextWindowDemo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.Show
	 * 		Flags  -> ()
	 */
	void UTextWindowDemo_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.Show");
		
		UTextWindowDemo_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.Hide
	 * 		Flags  -> ()
	 */
	void UTextWindowDemo_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.Hide");
		
		UTextWindowDemo_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTextWindowDemo_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.SetText");
		
		UTextWindowDemo_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.SetSpeaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InProfileId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextWindowDemo_C::SetSpeaker(const class FName& InProfileId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.SetSpeaker");
		
		UTextWindowDemo_C_SetSpeaker_Params params {};
		params.InProfileId = InProfileId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.SetNextMarkVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTextWindowDemo_C::SetNextMarkVisibility(bool bInVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.SetNextMarkVisibility");
		
		UTextWindowDemo_C_SetNextMarkVisibility_Params params {};
		params.bInVisibility = bInVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextWindowDemo.TextWindowDemo_C.ExecuteUbergraph_TextWindowDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextWindowDemo_C::ExecuteUbergraph_TextWindowDemo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TextWindowDemo.TextWindowDemo_C.ExecuteUbergraph_TextWindowDemo");
		
		UTextWindowDemo_C_ExecuteUbergraph_TextWindowDemo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextWindowDemo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextWindowDemo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextWindowDemo.TextWindowDemo_C");
		return ptr;
	}

}


