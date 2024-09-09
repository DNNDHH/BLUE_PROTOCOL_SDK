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
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.GetIconID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapIcon_C::GetIconID(int32_t* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.GetIconID");
		
		UFang_expedition_MapIcon_C_GetIconID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ClearNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapIcon_C::ClearNewMark(const class FString& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ClearNewMark");
		
		UFang_expedition_MapIcon_C_ClearNewMark_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.CheckNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InAreaList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_MapIcon_C::CheckNewMark(TArray<class FString>* InAreaList, bool* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.CheckNewMark");
		
		UFang_expedition_MapIcon_C_CheckNewMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAreaList != nullptr)
			*InAreaList = params.InAreaList;
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFang_expeditionStatus                           Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Multi                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_MapIcon_C::SetIconStatus(ESBFang_expeditionStatus Status, bool Multi, bool Time, bool New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconStatus");
		
		UFang_expedition_MapIcon_C_SetIconStatus_Params params {};
		params.Status = Status;
		params.Multi = Multi;
		params.Time = Time;
		params.New = New;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionIconData                  IconData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_MapIcon_C::SetIconData(const struct FSBFang_expeditionIconData& IconData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconData");
		
		UFang_expedition_MapIcon_C_SetIconData_Params params {};
		params.IconData = IconData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewIcon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TimeIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_MapIcon_C::SetData(const class FString& ID, int32_t IconType, bool NewIcon, bool TimeIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetData");
		
		UFang_expedition_MapIcon_C_SetData_Params params {};
		params.ID = ID;
		params.IconType = IconType;
		params.NewIcon = NewIcon;
		params.TimeIcon = TimeIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_MapIcon_C::BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_MapIcon_C_BndEvt__Fang_expedition_MapIcon_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ExecuteUbergraph_Fang_expedition_MapIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapIcon_C::ExecuteUbergraph_Fang_expedition_MapIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ExecuteUbergraph_Fang_expedition_MapIcon");
		
		UFang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnMultiIconSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapIcon_C::OnMultiIconSelect__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnMultiIconSelect__DelegateSignature");
		
		UFang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnIconSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_MapIcon_C::OnIconSelect__DelegateSignature(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnIconSelect__DelegateSignature");
		
		UFang_expedition_MapIcon_C_OnIconSelect__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_MapIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_MapIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_MapIcon.Fang_expedition_MapIcon_C");
		return ptr;
	}

}


