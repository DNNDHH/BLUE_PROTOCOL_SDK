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
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnCloseAnimationFinished
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLine_C::OnCloseAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnCloseAnimationFinished");
		
		UUMG_LoginBonusListLine_C_OnCloseAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ClearItemSelected
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLine_C::ClearItemSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ClearItemSelected");
		
		UUMG_LoginBonusListLine_C_ClearItemSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.PlayStumpAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPlay                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusListLine_C::PlayStumpAnimation(int32_t Index, bool* IsPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.PlayStumpAnimation");
		
		UUMG_LoginBonusListLine_C_PlayStumpAnimation_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlay != nullptr)
			*IsPlay = params.IsPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.GetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_LoginBonusListLineItem_C*               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLine_C::GetWidget(int32_t Index, class UUMG_LoginBonusListLineItem_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.GetWidget");
		
		UUMG_LoginBonusListLine_C_GetWidget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Set Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBLoginBonusWindowDayData                  Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Stump                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Click                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusListLine_C::SetData(int32_t Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Visibility, bool Stump, bool Click)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Set Data");
		
		UUMG_LoginBonusListLine_C_SetData_Params params {};
		params.Index = Index;
		params.Data = Data;
		params.Visibility = Visibility;
		params.Stump = Stump;
		params.Click = Click;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnStumpAnimationFinish
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLine_C::OnStumpAnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnStumpAnimationFinish");
		
		UUMG_LoginBonusListLine_C_OnStumpAnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Initialize
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLine_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Initialize");
		
		UUMG_LoginBonusListLine_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Finish
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLine_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Finish");
		
		UUMG_LoginBonusListLine_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnIconClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_LoginBonusListLineItem_C*               SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLine_C::OnIconClick(int32_t ID, class UUMG_LoginBonusListLineItem_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnIconClick");
		
		UUMG_LoginBonusListLine_C_OnIconClick_Params params {};
		params.ID = ID;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ExecuteUbergraph_UMG_LoginBonusListLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLine_C::ExecuteUbergraph_UMG_LoginBonusListLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ExecuteUbergraph_UMG_LoginBonusListLine");
		
		UUMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.IconClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_LoginBonusListLineItem_C*               SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLine_C::IconClick__DelegateSignature(int32_t Index, class UUMG_LoginBonusListLineItem_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.IconClick__DelegateSignature");
		
		UUMG_LoginBonusListLine_C_IconClick__DelegateSignature_Params params {};
		params.Index = Index;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.StumpAnimationFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLine_C::StumpAnimationFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.StumpAnimationFinish__DelegateSignature");
		
		UUMG_LoginBonusListLine_C_StumpAnimationFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LoginBonusListLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LoginBonusListLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LoginBonusListLine.UMG_LoginBonusListLine_C");
		return ptr;
	}

}


