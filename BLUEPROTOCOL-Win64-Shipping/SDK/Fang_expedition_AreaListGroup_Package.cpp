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
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ClearFieldList
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListGroup_C::ClearFieldList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ClearFieldList");
		
		UFang_expedition_AreaListGroup_C_ClearFieldList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetNewMarkListEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InFieldId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::SetNewMarkListEx(bool InParam, const class FString& InFieldId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetNewMarkListEx");
		
		UFang_expedition_AreaListGroup_C_SetNewMarkListEx_Params params {};
		params.InParam = InParam;
		params.InFieldId = InFieldId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::SetBtn(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetBtn");
		
		UFang_expedition_AreaListGroup_C_SetBtn_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_FieldItemClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::CB_FieldItemClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_FieldItemClick");
		
		UFang_expedition_AreaListGroup_C_CB_FieldItemClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetFieldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::SetFieldData(const class FString& Field)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetFieldData");
		
		UFang_expedition_AreaListGroup_C_SetFieldData_Params params {};
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (Parm, OutParm)
	 */
	void UFang_expedition_AreaListGroup_C::GetData(int32_t Index, bool* Valid, struct FSBFang_expeditionAreaData* AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.GetData");
		
		UFang_expedition_AreaListGroup_C_GetData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (AreaData != nullptr)
			*AreaData = params.AreaData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CheckPlayIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBFang_expeditionPlayData>          PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListGroup_C::CheckPlayIcon(TArray<struct FSBFang_expeditionPlayData>* PlayData, bool IsField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CheckPlayIcon");
		
		UFang_expedition_AreaListGroup_C_CheckPlayIcon_Params params {};
		params.IsField = IsField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayData != nullptr)
			*PlayData = params.PlayData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Finish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListGroup_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Finish");
		
		UFang_expedition_AreaListGroup_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::Initialize(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Initialize");
		
		UFang_expedition_AreaListGroup_C_Initialize_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Clear
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListGroup_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Clear");
		
		UFang_expedition_AreaListGroup_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_AreaItemClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::CB_AreaItemClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_AreaItemClick");
		
		UFang_expedition_AreaListGroup_C_CB_AreaItemClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.UpdateData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::UpdateData(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.UpdateData");
		
		UFang_expedition_AreaListGroup_C_UpdateData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListGroup_C::SetData(const struct FSBFang_expeditionAreaData& AreaData, bool IsField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetData");
		
		UFang_expedition_AreaListGroup_C_SetData_Params params {};
		params.AreaData = AreaData;
		params.IsField = IsField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListGroup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Destruct");
		
		UFang_expedition_AreaListGroup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ExecuteUbergraph_Fang_expedition_AreaListGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::ExecuteUbergraph_Fang_expedition_AreaListGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ExecuteUbergraph_Fang_expedition_AreaListGroup");
		
		UFang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnFieldClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::OnFieldClick__DelegateSignature(const class FString& Field, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnFieldClick__DelegateSignature");
		
		UFang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature_Params params {};
		params.Field = Field;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnAreaClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListGroup_C::OnAreaClick__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnAreaClick__DelegateSignature");
		
		UFang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_AreaListGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_AreaListGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C");
		return ptr;
	}

}


