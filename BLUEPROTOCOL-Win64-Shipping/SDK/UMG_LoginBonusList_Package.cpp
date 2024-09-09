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
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnCloseAnimationFinished
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::OnCloseAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnCloseAnimationFinished");
		
		UUMG_LoginBonusList_C_OnCloseAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetupMouseClickEvent
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::SetupMouseClickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetupMouseClickEvent");
		
		UUMG_LoginBonusList_C_SetupMouseClickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.PlayStampAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Play                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusList_C::PlayStampAnimation(int32_t Index, bool* Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.PlayStampAnimation");
		
		UUMG_LoginBonusList_C_PlayStampAnimation_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Play != nullptr)
			*Play = params.Play;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLoginBonusWindowData                     DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               MouseClick                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusList_C::SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetData");
		
		UUMG_LoginBonusList_C_SetData_Params params {};
		params.DataList = DataList;
		params.MouseClick = MouseClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.Construct");
		
		UUMG_LoginBonusList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.Initialize
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.Initialize");
		
		UUMG_LoginBonusList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnStumpAnimationFinish
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::OnStumpAnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnStumpAnimationFinish");
		
		UUMG_LoginBonusList_C_OnStumpAnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.Finish
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.Finish");
		
		UUMG_LoginBonusList_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnImageLoadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusList_C::OnImageLoadComplete(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnImageLoadComplete");
		
		UUMG_LoginBonusList_C_OnImageLoadComplete_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListItemClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_LoginBonusListLineItem_C*               SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusList_C::OnListItemClick(int32_t Index, class UUMG_LoginBonusListLineItem_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListItemClick");
		
		UUMG_LoginBonusList_C_OnListItemClick_Params params {};
		params.Index = Index;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.ExecuteUbergraph_UMG_LoginBonusList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusList_C::ExecuteUbergraph_UMG_LoginBonusList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.ExecuteUbergraph_UMG_LoginBonusList");
		
		UUMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.ListItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusList_C::ListItemClick__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.ListItemClick__DelegateSignature");
		
		UUMG_LoginBonusList_C_ListItemClick__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListInitComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::OnListInitComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListInitComplete__DelegateSignature");
		
		UUMG_LoginBonusList_C_OnListInitComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusList.UMG_LoginBonusList_C.StumpAnimationFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusList_C::StumpAnimationFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusList.UMG_LoginBonusList_C.StumpAnimationFinish__DelegateSignature");
		
		UUMG_LoginBonusList_C_StumpAnimationFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LoginBonusList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LoginBonusList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LoginBonusList.UMG_LoginBonusList_C");
		return ptr;
	}

}


