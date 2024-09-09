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
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.GetText
	 * 		Flags  -> ()
	 */
	class FText USBTextKeyIcon_C::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.GetText");
		
		USBTextKeyIcon_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USBTextKeyIcon_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.SetText");
		
		USBTextKeyIcon_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextGamePad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigActionPad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText USBTextKeyIcon_C::GetActionKeyTextGamePad(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionPad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextGamePad");
		
		USBTextKeyIcon_C_GetActionKeyTextGamePad_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigActionPad = KeyConfigActionPad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextKB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigActionKB                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText USBTextKeyIcon_C::GetActionKeyTextKB(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextKB");
		
		USBTextKeyIcon_C_GetActionKeyTextKB_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigActionKB = KeyConfigActionKB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigActionKB                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigAction                                 KeyConfigActionPad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText USBTextKeyIcon_C::GetActionKeyText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyText");
		
		USBTextKeyIcon_C_GetActionKeyText_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigActionKB = KeyConfigActionKB;
		params.KeyConfigActionPad = KeyConfigActionPad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bReplaceFunction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString USBTextKeyIcon_C::GetDisplayTextByKey(const struct FKey& Key, bool bReplaceFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByKey");
		
		USBTextKeyIcon_C_GetDisplayTextByKey_Params params {};
		params.Key = Key;
		params.bReplaceFunction = bReplaceFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bReplaceFunction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USBTextKeyIcon_C::SetDisplayTextByKey(const struct FKey& InKey, bool bReplaceFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKey");
		
		USBTextKeyIcon_C_SetDisplayTextByKey_Params params {};
		params.InKey = InKey;
		params.bReplaceFunction = bReplaceFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIKeyConfigAction                               KeyConfigAction                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString USBTextKeyIcon_C::GetDisplayTextByAction(ESBUIKeyConfigAction KeyConfigAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByAction");
		
		USBTextKeyIcon_C_GetDisplayTextByAction_Params params {};
		params.KeyConfigAction = KeyConfigAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIKeyConfigAction                               KeyConfigAction                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBTextKeyIcon_C::SetDisplayTextByAction(ESBUIKeyConfigAction KeyConfigAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByAction");
		
		USBTextKeyIcon_C_SetDisplayTextByAction_Params params {};
		params.KeyConfigAction = KeyConfigAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigActionKB                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigAction                                 KeyConfigActionPad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBTextKeyIcon_C::SetDisplayTextByKBPad2(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad2");
		
		USBTextKeyIcon_C_SetDisplayTextByKBPad2_Params params {};
		params.KeyConfigData = KeyConfigData;
		params.KeyConfigActionKB = KeyConfigActionKB;
		params.KeyConfigActionPad = KeyConfigActionPad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 KeyConfigActionKB                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigAction                                 KeyConfigActionPad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USBTextKeyIcon_C::SetDisplayTextByKBPad1(ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad1");
		
		USBTextKeyIcon_C_SetDisplayTextByKBPad1_Params params {};
		params.KeyConfigActionKB = KeyConfigActionKB;
		params.KeyConfigActionPad = KeyConfigActionPad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.BindUpdateOperationMode
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::BindUpdateOperationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.BindUpdateOperationMode");
		
		USBTextKeyIcon_C_BindUpdateOperationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindUpdateOperationMode
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::UnbindUpdateOperationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindUpdateOperationMode");
		
		USBTextKeyIcon_C_UnbindUpdateOperationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_5
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::CustomEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_5");
		
		USBTextKeyIcon_C_CustomEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.BindChangePadSkinType
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::BindChangePadSkinType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.BindChangePadSkinType");
		
		USBTextKeyIcon_C_BindChangePadSkinType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindChangePadSkinType
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::UnbindChangePadSkinType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindChangePadSkinType");
		
		USBTextKeyIcon_C_UnbindChangePadSkinType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBTextKeyIcon_C::CustomEvent_6(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_6");
		
		USBTextKeyIcon_C_CustomEvent_6_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.BindConfigSave
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::BindConfigSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.BindConfigSave");
		
		USBTextKeyIcon_C_BindConfigSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindConfigSave
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::UnbindConfigSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindConfigSave");
		
		USBTextKeyIcon_C_UnbindConfigSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent");
		
		USBTextKeyIcon_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.BindUpdateKeyConfig
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::BindUpdateKeyConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.BindUpdateKeyConfig");
		
		USBTextKeyIcon_C_BindUpdateKeyConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindUpdateKeyConfig
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::UnbindUpdateKeyConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.UnbindUpdateKeyConfig");
		
		USBTextKeyIcon_C_UnbindUpdateKeyConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USBTextKeyIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.PreConstruct");
		
		USBTextKeyIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.Construct");
		
		USBTextKeyIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.Destruct
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.Destruct");
		
		USBTextKeyIcon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.ExecuteUbergraph_SBTextKeyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBTextKeyIcon_C::ExecuteUbergraph_SBTextKeyIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.ExecuteUbergraph_SBTextKeyIcon");
		
		USBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.OnUpdateKeyConfig__DelegateSignature");
		
		USBTextKeyIcon_C_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.OnChangePadSkinType__DelegateSignature");
		
		USBTextKeyIcon_C_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBTextKeyIcon.SBTextKeyIcon_C.OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USBTextKeyIcon_C::OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBTextKeyIcon.SBTextKeyIcon_C.OnUpdateOperationMode__DelegateSignature");
		
		USBTextKeyIcon_C_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBTextKeyIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBTextKeyIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SBTextKeyIcon.SBTextKeyIcon_C");
		return ptr;
	}

}


