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
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ShowNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListItem_C::ShowNewMark(bool InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ShowNewMark");
		
		UFang_expedition_AreaListItem_C_ShowNewMark_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ClearNewMark
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListItem_C::ClearNewMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ClearNewMark");
		
		UFang_expedition_AreaListItem_C_ClearNewMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListItem_C::CheckNewMark(const class FString& InParam, bool* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckNewMark");
		
		UFang_expedition_AreaListItem_C_CheckNewMark_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BtnSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListItem_C::SetBtnSelected(bool BtnSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetBtnSelected");
		
		UFang_expedition_AreaListItem_C_SetBtnSelected_Params params {};
		params.BtnSelected = BtnSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetFieldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListItem_C::SetFieldData(int32_t Index, const class FString& Field)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetFieldData");
		
		UFang_expedition_AreaListItem_C_SetFieldData_Params params {};
		params.Index = Index;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (Parm, OutParm)
	 */
	void UFang_expedition_AreaListItem_C::GetData(struct FSBFang_expeditionAreaData* AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.GetData");
		
		UFang_expedition_AreaListItem_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AreaData != nullptr)
			*AreaData = params.AreaData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ResetPlayIcon
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListItem_C::ResetPlayIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ResetPlayIcon");
		
		UFang_expedition_AreaListItem_C_ResetPlayIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBFang_expeditionPlayData>          PlayDataList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListItem_C::CheckPlayData(TArray<struct FSBFang_expeditionPlayData>* PlayDataList, bool IsField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckPlayData");
		
		UFang_expedition_AreaListItem_C_CheckPlayData_Params params {};
		params.IsField = IsField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayDataList != nullptr)
			*PlayDataList = params.PlayDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionAreaData                  Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            BgOverwrite                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryOverwrite                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListItem_C::SetData(int32_t Index, const struct FSBFang_expeditionAreaData& Data, int32_t BgOverwrite, int32_t CategoryOverwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetData");
		
		UFang_expedition_AreaListItem_C_SetData_Params params {};
		params.Index = Index;
		params.Data = Data;
		params.BgOverwrite = BgOverwrite;
		params.CategoryOverwrite = CategoryOverwrite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BGTypeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListItem_C::BGTypeSet(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BGTypeSet");
		
		UFang_expedition_AreaListItem_C_BGTypeSet_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListItem_C::BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_AreaListItem_C_BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListItem_C::BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_AreaListItem_C_BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListItem_C::BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UFang_expedition_AreaListItem_C_BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListItem_C::BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UFang_expedition_AreaListItem_C_BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ExecuteUbergraph_Fang_expedition_AreaListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListItem_C::ExecuteUbergraph_Fang_expedition_AreaListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ExecuteUbergraph_Fang_expedition_AreaListItem");
		
		UFang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.OnItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListItem_C::OnItemSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.OnItemSelected__DelegateSignature");
		
		UFang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_AreaListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_AreaListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C");
		return ptr;
	}

}


