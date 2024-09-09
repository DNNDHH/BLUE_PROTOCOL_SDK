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
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    InAwardIdList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommunicateSettingMenu_ClassData_C::SetData(ESBClassType InClassType, int32_t InClassLevel, TArray<int32_t> InAwardIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetData");
		
		UCommunicateSettingMenu_ClassData_C_SetData_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		params.InAwardIdList = InAwardIdList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetClassIconAndName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    InAwardIdList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommunicateSettingMenu_ClassData_C::SetClassIconAndName(ESBClassType InClassType, TArray<int32_t> InAwardIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetClassIconAndName");
		
		UCommunicateSettingMenu_ClassData_C_SetClassIconAndName_Params params {};
		params.InClassType = InClassType;
		params.InAwardIdList = InAwardIdList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ErrorDataSet
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::ErrorDataSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ErrorDataSet");
		
		UCommunicateSettingMenu_ClassData_C_ErrorDataSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AwardId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature(int32_t AwardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature_Params params {};
		params.AwardId = AwardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetAwardId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InAwardId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommunicateSettingMenu_ClassData_C::SetAwardId(TArray<int32_t> InAwardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetAwardId");
		
		UCommunicateSettingMenu_ClassData_C_SetAwardId_Params params {};
		params.InAwardId = InAwardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommunicateSettingMenu_ClassData_C::SetBtnEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetBtnEnable");
		
		UCommunicateSettingMenu_ClassData_C_SetBtnEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ExecuteUbergraph_CommunicateSettingMenu_ClassData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_ClassData_C::ExecuteUbergraph_CommunicateSettingMenu_ClassData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ExecuteUbergraph_CommunicateSettingMenu_ClassData");
		
		UCommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnUnhver__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::OnUnhver__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnUnhver__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_OnUnhver__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnHover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnHover__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ClassData_C::OnClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnClickEvent__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_OnClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ClickedBtnAwardIconItemList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AwardId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_ClassData_C::ClickedBtnAwardIconItemList__DelegateSignature(int32_t AwardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ClickedBtnAwardIconItemList__DelegateSignature");
		
		UCommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature_Params params {};
		params.AwardId = AwardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_ClassData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_ClassData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C");
		return ptr;
	}

}


