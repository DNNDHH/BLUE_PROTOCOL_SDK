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
	 * 		Name   -> Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_CategoryButtonList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.PreConstruct");
		
		URankingMenu_CategoryButtonList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.Construct
	 * 		Flags  -> ()
	 */
	void URankingMenu_CategoryButtonList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.Construct");
		
		URankingMenu_CategoryButtonList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ChangeFocusButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_CategoryButtonList_C::ChangeFocusButton(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ChangeFocusButton");
		
		URankingMenu_CategoryButtonList_C_ChangeFocusButton_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ExecuteUbergraph_RankingMenu_CategoryButtonList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_CategoryButtonList_C::ExecuteUbergraph_RankingMenu_CategoryButtonList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ExecuteUbergraph_RankingMenu_CategoryButtonList");
		
		URankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_CategoryButtonList_C::OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.OnClick__DelegateSignature");
		
		URankingMenu_CategoryButtonList_C_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingMenu_CategoryButtonList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingMenu_CategoryButtonList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C");
		return ptr;
	}

}


