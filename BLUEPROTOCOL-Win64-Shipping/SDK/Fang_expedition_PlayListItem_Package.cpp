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
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetBlank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TextVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TimeNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListItem_C::SetBlank(bool TextVisibility, int32_t TimeNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetBlank");
		
		UFang_expedition_PlayListItem_C_SetBlank_Params params {};
		params.TextVisibility = TextVisibility;
		params.TimeNum = TimeNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListItem_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetEmpty");
		
		UFang_expedition_PlayListItem_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_PlayListItem_C::SetData(int32_t Index, struct FSBFang_expeditionPlayData* PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetData");
		
		UFang_expedition_PlayListItem_C_SetData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayData != nullptr)
			*PlayData = params.PlayData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Construct");
		
		UFang_expedition_PlayListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_PlayButtonClick
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListItem_C::CB_PlayButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_PlayButtonClick");
		
		UFang_expedition_PlayListItem_C_CB_PlayButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_FinishButtonClick
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListItem_C::CB_FinishButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_FinishButtonClick");
		
		UFang_expedition_PlayListItem_C_CB_FinishButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Destruct");
		
		UFang_expedition_PlayListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.ExecuteUbergraph_Fang_expedition_PlayListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListItem_C::ExecuteUbergraph_Fang_expedition_PlayListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.ExecuteUbergraph_Fang_expedition_PlayListItem");
		
		UFang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Finish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListItem_C::OnClick_Finish__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Finish__DelegateSignature");
		
		UFang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Playing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListItem_C::OnClick_Playing__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Playing__DelegateSignature");
		
		UFang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_PlayListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_PlayListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C");
		return ptr;
	}

}


