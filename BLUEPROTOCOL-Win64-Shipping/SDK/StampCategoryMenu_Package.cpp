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
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.IsSelectHistoryCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHistoryCategory                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStampCategoryMenu_C::IsSelectHistoryCategory(bool* IsHistoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.IsSelectHistoryCategory");
		
		UStampCategoryMenu_C_IsSelectHistoryCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHistoryCategory != nullptr)
			*IsHistoryCategory = params.IsHistoryCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.IsValidSelectStampCategoryMasterData
	 * 		Flags  -> ()
	 */
	bool UStampCategoryMenu_C::IsValidSelectStampCategoryMasterData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.IsValidSelectStampCategoryMasterData");
		
		UStampCategoryMenu_C_IsValidSelectStampCategoryMasterData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.GetSelectStampCategoryMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  Output                                                     (Parm, OutParm)
	 */
	void UStampCategoryMenu_C::GetSelectStampCategoryMasterData(struct FSBStampCategoryMasterData* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.GetSelectStampCategoryMasterData");
		
		UStampCategoryMenu_C_GetSelectStampCategoryMasterData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.GetSelectButtonIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectButtonIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::GetSelectButtonIndex(int32_t* SelectButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.GetSelectButtonIndex");
		
		UStampCategoryMenu_C_GetSelectButtonIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectButtonIndex != nullptr)
			*SelectButtonIndex = params.SelectButtonIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.CheckLimitedTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStampCategoryMenu_C::CheckLimitedTimeStamp(int32_t StampId, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.CheckLimitedTimeStamp");
		
		UStampCategoryMenu_C_CheckLimitedTimeStamp_Params params {};
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.SaveStampHisoryIdsData
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::SaveStampHisoryIdsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.SaveStampHisoryIdsData");
		
		UStampCategoryMenu_C_SaveStampHisoryIdsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.LoadStampHistoryIdsData
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::LoadStampHistoryIdsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.LoadStampHistoryIdsData");
		
		UStampCategoryMenu_C_LoadStampHistoryIdsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.FindStampCategoryMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCategoryId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFind                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStampCategoryMasterData                  RetData                                                    (Parm, OutParm)
	 */
	void UStampCategoryMenu_C::FindStampCategoryMasterData(int32_t InCategoryId, bool* IsFind, struct FSBStampCategoryMasterData* RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.FindStampCategoryMasterData");
		
		UStampCategoryMenu_C_FindStampCategoryMasterData_Params params {};
		params.InCategoryId = InCategoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFind != nullptr)
			*IsFind = params.IsFind;
		if (RetData != nullptr)
			*RetData = params.RetData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.UpdateMyStampDataList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::UpdateMyStampDataList(int32_t StampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.UpdateMyStampDataList");
		
		UStampCategoryMenu_C_UpdateMyStampDataList_Params params {};
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.Set History Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStampCategoryMenu_C::SetHistoryMode(bool bSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.Set History Mode");
		
		UStampCategoryMenu_C_SetHistoryMode_Params params {};
		params.bSet = bSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.UpdateEnableButton
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::UpdateEnableButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.UpdateEnableButton");
		
		UStampCategoryMenu_C_UpdateEnableButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.Update Button
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.Update Button");
		
		UStampCategoryMenu_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.GetMyStampDataList
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::GetMyStampDataList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.GetMyStampDataList");
		
		UStampCategoryMenu_C_GetMyStampDataList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.Construct");
		
		UStampCategoryMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.Show
	 * 		Flags  -> ()
	 */
	void UStampCategoryMenu_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.Show");
		
		UStampCategoryMenu_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryMenu_StampCategoryFavoriteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::BndEvt__StampCategoryMenu_StampCategoryFavoriteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryMenu_StampCategoryFavoriteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UStampCategoryMenu_C_BndEvt__StampCategoryMenu_StampCategoryFavoriteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.ExecuteUbergraph_StampCategoryMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStampCategoryMenu_C::ExecuteUbergraph_StampCategoryMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.ExecuteUbergraph_StampCategoryMenu");
		
		UStampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StampCategoryMenu.StampCategoryMenu_C.OnUpdateStamp__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  StampCategoryMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStampCategoryMenu_C::OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StampCategoryMenu.StampCategoryMenu_C.OnUpdateStamp__DelegateSignature");
		
		UStampCategoryMenu_C_OnUpdateStamp__DelegateSignature_Params params {};
		params.StampCategoryMasterData = StampCategoryMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStampCategoryMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStampCategoryMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StampCategoryMenu.StampCategoryMenu_C");
		return ptr;
	}

}


