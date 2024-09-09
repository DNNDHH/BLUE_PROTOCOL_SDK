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
	 * 		Name   -> Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TotalPower                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Achievement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBPlatformInfo                             InPlatformInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void URankingPartyMenu_PlayerOne_C::SetData(const class FText& Name, int32_t TotalPower, int32_t Level, ESBClassType Class, int32_t Achievement, const class FString& CharacterId, int32_t Rank, const struct FSBPlatformInfo& InPlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.SetData");
		
		URankingPartyMenu_PlayerOne_C_SetData_Params params {};
		params.Name = Name;
		params.TotalPower = TotalPower;
		params.Level = Level;
		params.Class = Class;
		params.Achievement = Achievement;
		params.CharacterId = CharacterId;
		params.Rank = Rank;
		params.InPlatformInfo = InPlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.DownLoadFaceImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URankingPartyMenu_PlayerOne_C::DownLoadFaceImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.DownLoadFaceImage_Event");
		
		URankingPartyMenu_PlayerOne_C_DownLoadFaceImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void URankingPartyMenu_PlayerOne_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.OnClose_Event");
		
		URankingPartyMenu_PlayerOne_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingPartyMenu_PlayerOne_C::OnIsGetPlayerProfileDetailMenuDataDelegate_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
		
		URankingPartyMenu_PlayerOne_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.BndEvt__RankingPartyMenu_PlayerOne_PlayerButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingPartyMenu_PlayerOne_C::BndEvt__RankingPartyMenu_PlayerOne_PlayerButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.BndEvt__RankingPartyMenu_PlayerOne_PlayerButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		URankingPartyMenu_PlayerOne_C_BndEvt__RankingPartyMenu_PlayerOne_PlayerButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.ExecuteUbergraph_RankingPartyMenu_PlayerOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingPartyMenu_PlayerOne_C::ExecuteUbergraph_RankingPartyMenu_PlayerOne(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C.ExecuteUbergraph_RankingPartyMenu_PlayerOne");
		
		URankingPartyMenu_PlayerOne_C_ExecuteUbergraph_RankingPartyMenu_PlayerOne_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingPartyMenu_PlayerOne_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingPartyMenu_PlayerOne_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingPartyMenu_PlayerOne.RankingPartyMenu_PlayerOne_C");
		return ptr;
	}

}


