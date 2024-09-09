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
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.AnimDone
	 * 		Flags  -> ()
	 */
	void UP021_CountIcon_C::AnimDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.AnimDone");
		
		UP021_CountIcon_C_AnimDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UP021_CountIcon_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.PlayAnim");
		
		UP021_CountIcon_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.SwitchColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EP021CountType                                     SWITCH                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021_CountIcon_C::SwitchColor(EP021CountType SWITCH)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.SwitchColor");
		
		UP021_CountIcon_C_SwitchColor_Params params {};
		params.SWITCH = SWITCH;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.Init
	 * 		Flags  -> ()
	 */
	void UP021_CountIcon_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.Init");
		
		UP021_CountIcon_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP021_CountIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.PreConstruct");
		
		UP021_CountIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UP021_CountIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.Construct");
		
		UP021_CountIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_CountIcon.P021_CountIcon_C.ExecuteUbergraph_P021_CountIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021_CountIcon_C::ExecuteUbergraph_P021_CountIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_CountIcon.P021_CountIcon_C.ExecuteUbergraph_P021_CountIcon");
		
		UP021_CountIcon_C_ExecuteUbergraph_P021_CountIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP021_CountIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP021_CountIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P021_CountIcon.P021_CountIcon_C");
		return ptr;
	}

}


