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
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.GetOwningSbPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UOtherPCListMain_C::GetOwningSbPlayerState(class ASBPlayerState** Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.GetOwningSbPlayerState");
		
		UOtherPCListMain_C_GetOwningSbPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.SelectPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOnlyListUpdate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCListMain_C::SelectPlayer(class APlayerState* InPlayerState, bool bOnlyListUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.SelectPlayer");
		
		UOtherPCListMain_C_SelectPlayer_Params params {};
		params.InPlayerState = InPlayerState;
		params.bOnlyListUpdate = bOnlyListUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.Search Player List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MatchistID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCListMain_C::SearchPlayerList(class APlayerState* InPlayerState, int32_t* MatchistID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.Search Player List");
		
		UOtherPCListMain_C_SearchPlayerList_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MatchistID != nullptr)
			*MatchistID = params.MatchistID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.ResetSelectList
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::ResetSelectList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.ResetSelectList");
		
		UOtherPCListMain_C_ResetSelectList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.UpdatePlayerList
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::UpdatePlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.UpdatePlayerList");
		
		UOtherPCListMain_C_UpdatePlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.Construct
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.Construct");
		
		UOtherPCListMain_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.Destruct");
		
		UOtherPCListMain_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.Open
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.Open");
		
		UOtherPCListMain_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.OnEventListSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCListMain_C::OnEventListSelected(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.OnEventListSelected");
		
		UOtherPCListMain_C_OnEventListSelected_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCListMain_C_BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.OnIsBlackListed_event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBlackListed                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCListMain_C::OnIsBlackListed_event_1(bool bIsBlackListed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.OnIsBlackListed_event_1");
		
		UOtherPCListMain_C_OnIsBlackListed_event_1_Params params {};
		params.bIsBlackListed = bIsBlackListed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.StartUpdateAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLoop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCListMain_C::StartUpdateAnim(bool IsLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.StartUpdateAnim");
		
		UOtherPCListMain_C_StartUpdateAnim_Params params {};
		params.IsLoop = IsLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.EndUpdateAnim
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::EndUpdateAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.EndUpdateAnim");
		
		UOtherPCListMain_C_EndUpdateAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.MoveCursorPositionToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCListMain_C::MoveCursorPositionToList(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.MoveCursorPositionToList");
		
		UOtherPCListMain_C_MoveCursorPositionToList_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.Update
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.Update");
		
		UOtherPCListMain_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.OnEventListSelectedMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOnlyListUpdate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCListMain_C::OnEventListSelectedMain(int32_t listIndex, bool bOnlyListUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.OnEventListSelectedMain");
		
		UOtherPCListMain_C_OnEventListSelectedMain_Params params {};
		params.listIndex = listIndex;
		params.bOnlyListUpdate = bOnlyListUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.ExecuteUbergraph_OtherPCListMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCListMain_C::ExecuteUbergraph_OtherPCListMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.ExecuteUbergraph_OtherPCListMain");
		
		UOtherPCListMain_C_ExecuteUbergraph_OtherPCListMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.OnListUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::OnListUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.OnListUpdated__DelegateSignature");
		
		UOtherPCListMain_C_OnListUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.OnClickUpdateButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCListMain_C::OnClickUpdateButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.OnClickUpdateButton__DelegateSignature");
		
		UOtherPCListMain_C_OnClickUpdateButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCListMain.OtherPCListMain_C.OnListSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCListMain_C::OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, const class FName& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCListMain.OtherPCListMain_C.OnListSelected__DelegateSignature");
		
		UOtherPCListMain_C_OnListSelected__DelegateSignature_Params params {};
		params.PlayerState = PlayerState;
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOtherPCListMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOtherPCListMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OtherPCListMain.OtherPCListMain_C");
		return ptr;
	}

}


