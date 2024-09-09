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
	 * 		Name   -> Function P020_MarkIcon.P020_MarkIcon_C.Show Icon BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020_MarkIcon_C::ShowIconBP(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkIcon.P020_MarkIcon_C.Show Icon BP");
		
		UP020_MarkIcon_C_ShowIconBP_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_MarkIcon.P020_MarkIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020_MarkIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkIcon.P020_MarkIcon_C.PreConstruct");
		
		UP020_MarkIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_MarkIcon.P020_MarkIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UP020_MarkIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkIcon.P020_MarkIcon_C.Construct");
		
		UP020_MarkIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityStart
	 * 		Flags  -> ()
	 */
	void UP020_MarkIcon_C::OnIconVisibilityStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityStart");
		
		UP020_MarkIcon_C_OnIconVisibilityStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityEnd
	 * 		Flags  -> ()
	 */
	void UP020_MarkIcon_C::OnIconVisibilityEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityEnd");
		
		UP020_MarkIcon_C_OnIconVisibilityEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_MarkIcon.P020_MarkIcon_C.ExecuteUbergraph_P020_MarkIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020_MarkIcon_C::ExecuteUbergraph_P020_MarkIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkIcon.P020_MarkIcon_C.ExecuteUbergraph_P020_MarkIcon");
		
		UP020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP020_MarkIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP020_MarkIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P020_MarkIcon.P020_MarkIcon_C");
		return ptr;
	}

}


