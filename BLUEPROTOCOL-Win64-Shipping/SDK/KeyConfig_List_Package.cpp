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
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ResetSliderChanged
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::ResetSliderChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ResetSliderChanged");
		
		UKeyConfig_List_C_ResetSliderChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.UpdateData
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::UpdateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.UpdateData");
		
		UKeyConfig_List_C_UpdateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.CalcTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Top                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::CalcTop(int32_t Limit, float* Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.CalcTop");
		
		UKeyConfig_List_C_CalcTop_Params params {};
		params.Limit = Limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Top != nullptr)
			*Top = params.Top;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.GetNoAssignedItemTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfig                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EConfig_KeyconfigItems                             InputType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::GetNoAssignedItemTop(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems* InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.GetNoAssignedItemTop");
		
		UKeyConfig_List_C_GetNoAssignedItemTop_Params params {};
		params.KeyConfig = KeyConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputType != nullptr)
			*InputType = params.InputType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ContainsNoAssignedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfig                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Assigned                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_List_C::ContainsNoAssignedKey(const struct FSBPlayerClassKeyConfigData& KeyConfig, bool* Assigned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ContainsNoAssignedKey");
		
		UKeyConfig_List_C_ContainsNoAssignedKey_Params params {};
		params.KeyConfig = KeyConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Assigned != nullptr)
			*Assigned = params.Assigned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ResetInputModes
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::ResetInputModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ResetInputModes");
		
		UKeyConfig_List_C_ResetInputModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.GetNoneTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKeyConfig_ConfigSlot_C*                     AsKeyConfigConfigSlot                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bChanged                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_List_C::GetNoneTop(class UKeyConfig_ConfigSlot_C** AsKeyConfigConfigSlot, bool* bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.GetNoneTop");
		
		UKeyConfig_List_C_GetNoneTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsKeyConfigConfigSlot != nullptr)
			*AsKeyConfigConfigSlot = params.AsKeyConfigConfigSlot;
		if (bChanged != nullptr)
			*bChanged = params.bChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.HasNone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasNone                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_List_C::HasNone(bool* bHasNone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.HasNone");
		
		UKeyConfig_List_C_HasNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasNone != nullptr)
			*bHasNone = params.bHasNone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.GetChangedTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Target                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bChanged                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_List_C::GetChangedTop(class UUserWidget** Target, bool* bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.GetChangedTop");
		
		UKeyConfig_List_C_GetChangedTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		if (bChanged != nullptr)
			*bChanged = params.bChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ApplyKeyConfigDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 SBPlayerClassKeyConfigData                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyConfig_List_C::ApplyKeyConfigDatas(struct FSBPlayerClassKeyConfigData* SBPlayerClassKeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ApplyKeyConfigDatas");
		
		UKeyConfig_List_C_ApplyKeyConfigDatas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SBPlayerClassKeyConfigData != nullptr)
			*SBPlayerClassKeyConfigData = params.SBPlayerClassKeyConfigData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.CreateChildWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyConfigType                              ConfigureType                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Child                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyConfigItemType                          ItemType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::CreateChildWidget(const struct FKeyConfigType& ConfigureType, class UUserWidget** Child, EConfig_KeyConfigItemType* ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.CreateChildWidget");
		
		UKeyConfig_List_C_CreateChildWidget_Params params {};
		params.ConfigureType = ConfigureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Child != nullptr)
			*Child = params.Child;
		if (ItemType != nullptr)
			*ItemType = params.ItemType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ApplyPadKeyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGamePadSettings                          SBGamePadSettings                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyConfig_List_C::ApplyPadKeyConfig(const struct FSBGamePadSettings& SBGamePadSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ApplyPadKeyConfig");
		
		UKeyConfig_List_C_ApplyPadKeyConfig_Params params {};
		params.SBGamePadSettings = SBGamePadSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ApplyKeyboardMouseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBKeyboardSettings                         SBKeyboardSettings                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBMouseSettings                            SBMouseSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyConfig_List_C::ApplyKeyboardMouseData(const struct FSBKeyboardSettings& SBKeyboardSettings, const struct FSBMouseSettings& SBMouseSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ApplyKeyboardMouseData");
		
		UKeyConfig_List_C_ApplyKeyboardMouseData_Params params {};
		params.SBKeyboardSettings = SBKeyboardSettings;
		params.SBMouseSettings = SBMouseSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.CheckChangedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 Base                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBPlayerClassKeyConfigData                 Now                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyConfig_List_C::CheckChangedKey(const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.CheckChangedKey");
		
		UKeyConfig_List_C_CheckChangedKey_Params params {};
		params.Base = Base;
		params.Now = Now;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.OnChangeSlider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_Slider_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::OnChangeSlider(int32_t Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.OnChangeSlider");
		
		UKeyConfig_List_C_OnChangeSlider_Params params {};
		params.Value = Value;
		params.Ratio = Ratio;
		params.Type = Type;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.OnChangeRadio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::OnChangeRadio(int32_t Index, EConfig_KeyconfigItems Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.OnChangeRadio");
		
		UKeyConfig_List_C_OnChangeRadio_Params params {};
		params.Index = Index;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ApplySliders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UKeyConfig_List_C::ApplySliders(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ApplySliders");
		
		UKeyConfig_List_C_ApplySliders_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ApplyRadio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UKeyConfig_List_C::ApplyRadio(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ApplyRadio");
		
		UKeyConfig_List_C_ApplyRadio_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.CheckChangedSlider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKeyConfig_Slider_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBPlayerClassKeyConfigData                 Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSBPlayerClassKeyConfigData                 Now                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UKeyConfig_List_C::CheckChangedSlider(class UKeyConfig_Slider_C* Target, const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.CheckChangedSlider");
		
		UKeyConfig_List_C_CheckChangedSlider_Params params {};
		params.Target = Target;
		params.Base = Base;
		params.Now = Now;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.OnDeleteBookmarks
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::OnDeleteBookmarks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.OnDeleteBookmarks");
		
		UKeyConfig_List_C_OnDeleteBookmarks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_List_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.PreConstruct");
		
		UKeyConfig_List_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.KeyChangeWait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_ConfigSlot_C*                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::KeyChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.KeyChangeWait");
		
		UKeyConfig_List_C_KeyChangeWait_Params params {};
		params.KeyType = KeyType;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.PadChangeWait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_ConfigSlot_C*                     Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::PadChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.PadChangeWait");
		
		UKeyConfig_List_C_PadChangeWait_Params params {};
		params.KeyType = KeyType;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ScrollChangeTop
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::ScrollChangeTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ScrollChangeTop");
		
		UKeyConfig_List_C_ScrollChangeTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ScrollNoneTop
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::ScrollNoneTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ScrollNoneTop");
		
		UKeyConfig_List_C_ScrollNoneTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ExecuteUbergraph_KeyConfig_List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::ExecuteUbergraph_KeyConfig_List(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ExecuteUbergraph_KeyConfig_List");
		
		UKeyConfig_List_C_ExecuteUbergraph_KeyConfig_List_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.BookmarkDeletes__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UKeyConfig_List_C::BookmarkDeletes__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.BookmarkDeletes__DelegateSignature");
		
		UKeyConfig_List_C_BookmarkDeletes__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ChangeRadio__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::ChangeRadio__DelegateSignature(int32_t Index, EConfig_KeyconfigItems Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ChangeRadio__DelegateSignature");
		
		UKeyConfig_List_C_ChangeRadio__DelegateSignature_Params params {};
		params.Index = Index;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.SliderChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_Slider_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::SliderChange__DelegateSignature(int32_t Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.SliderChange__DelegateSignature");
		
		UKeyConfig_List_C_SliderChange__DelegateSignature_Params params {};
		params.Value = Value;
		params.Ratio = Ratio;
		params.Type = Type;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ClickedPadChangeWait__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::ClickedPadChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ClickedPadChangeWait__DelegateSignature");
		
		UKeyConfig_List_C_ClickedPadChangeWait__DelegateSignature_Params params {};
		params.KeyType = KeyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_List.KeyConfig_List_C.ClickedKeyChangeWait__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_List_C::ClickedKeyChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_List.KeyConfig_List_C.ClickedKeyChangeWait__DelegateSignature");
		
		UKeyConfig_List_C_ClickedKeyChangeWait__DelegateSignature_Params params {};
		params.KeyType = KeyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyConfig_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyConfig_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyConfig_List.KeyConfig_List_C");
		return ptr;
	}

}


