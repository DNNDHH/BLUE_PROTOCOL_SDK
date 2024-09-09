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
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.On Set StackM Value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAccRate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP011HUDStackM_C::OnSetStackMValue(int32_t InStack, float InAccRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.On Set StackM Value");
		
		UP011HUDStackM_C_OnSetStackMValue_Params params {};
		params.InStack = InStack;
		params.InAccRate = InAccRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.PlayAnimReverseInOut
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::PlayAnimReverseInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.PlayAnimReverseInOut");
		
		UP011HUDStackM_C_PlayAnimReverseInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.PlayAnimForwardInOut
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::PlayAnimForwardInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.PlayAnimForwardInOut");
		
		UP011HUDStackM_C_PlayAnimForwardInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.OnSetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEdit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP011HUDStackM_C::OnSetEditMode(bool InIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.OnSetEditMode");
		
		UP011HUDStackM_C_OnSetEditMode_Params params {};
		params.InIsEdit = InIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.OnTerminate");
		
		UP011HUDStackM_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.OnInitialize");
		
		UP011HUDStackM_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.OnUnbind");
		
		UP011HUDStackM_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.OnBind
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.OnBind");
		
		UP011HUDStackM_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.BindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::BindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.BindVisibleSetting");
		
		UP011HUDStackM_C_BindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.OnUIVisibleSettingChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP011HUDStackM_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.OnUIVisibleSettingChange");
		
		UP011HUDStackM_C_OnUIVisibleSettingChange_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.UnbindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP011HUDStackM_C::UnbindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.UnbindVisibleSetting");
		
		UP011HUDStackM_C_UnbindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P011HUDStackM.P011HUDStackM_C.ExecuteUbergraph_P011HUDStackM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP011HUDStackM_C::ExecuteUbergraph_P011HUDStackM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P011HUDStackM.P011HUDStackM_C.ExecuteUbergraph_P011HUDStackM");
		
		UP011HUDStackM_C_ExecuteUbergraph_P011HUDStackM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP011HUDStackM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP011HUDStackM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P011HUDStackM.P011HUDStackM_C");
		return ptr;
	}

}


