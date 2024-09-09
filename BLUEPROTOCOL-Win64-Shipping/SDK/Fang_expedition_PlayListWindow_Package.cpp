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
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionData                      ExpeditionData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_PlayListWindow_C::SetData(struct FSBFang_expeditionData* ExpeditionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.SetData");
		
		UFang_expedition_PlayListWindow_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExpeditionData != nullptr)
			*ExpeditionData = params.ExpeditionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Construct");
		
		UFang_expedition_PlayListWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressDetailButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListWindow_C::CB_OnPressDetailButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressDetailButton");
		
		UFang_expedition_PlayListWindow_C_CB_OnPressDetailButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressFinishButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListWindow_C::CB_OnPressFinishButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressFinishButton");
		
		UFang_expedition_PlayListWindow_C_CB_OnPressFinishButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_PlayListWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Destruct");
		
		UFang_expedition_PlayListWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.ExecuteUbergraph_Fang_expedition_PlayListWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListWindow_C::ExecuteUbergraph_Fang_expedition_PlayListWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.ExecuteUbergraph_Fang_expedition_PlayListWindow");
		
		UFang_expedition_PlayListWindow_C_ExecuteUbergraph_Fang_expedition_PlayListWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressFinishButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListWindow_C::OnPressFinishButton__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressFinishButton__DelegateSignature");
		
		UFang_expedition_PlayListWindow_C_OnPressFinishButton__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressDetailButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListWindow_C::OnPressDetailButton__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressDetailButton__DelegateSignature");
		
		UFang_expedition_PlayListWindow_C_OnPressDetailButton__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnSelectPlayListSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_PlayListWindow_C::OnSelectPlayListSlot__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnSelectPlayListSlot__DelegateSignature");
		
		UFang_expedition_PlayListWindow_C_OnSelectPlayListSlot__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_PlayListWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_PlayListWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C");
		return ptr;
	}

}


