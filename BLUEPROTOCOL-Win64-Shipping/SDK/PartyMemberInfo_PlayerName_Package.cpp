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
	 * 		Name   -> Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.GetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_PlayerName_C::GetPlayerName(class FString* OutPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.GetPlayerName");
		
		UPartyMemberInfo_PlayerName_C_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerName != nullptr)
			*OutPlayerName = params.OutPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsBlock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsUGC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_PlayerName_C::SetPlayerName(const class FString& InName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool InIsUGC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.SetPlayerName");
		
		UPartyMemberInfo_PlayerName_C_SetPlayerName_Params params {};
		params.InName = InName;
		params.IsBlock = IsBlock;
		params.PlayerId = PlayerId;
		params.CharacterId = CharacterId;
		params.InIsUGC = InIsUGC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.OnSetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InCacheCharacterName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsBlock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsUGC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_PlayerName_C::OnSetPlayerName(const class FText& InCacheCharacterName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool IsUGC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.OnSetPlayerName");
		
		UPartyMemberInfo_PlayerName_C_OnSetPlayerName_Params params {};
		params.InCacheCharacterName = InCacheCharacterName;
		params.IsBlock = IsBlock;
		params.PlayerId = PlayerId;
		params.CharacterId = CharacterId;
		params.IsUGC = IsUGC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.ExecuteUbergraph_PartyMemberInfo_PlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_PlayerName_C::ExecuteUbergraph_PartyMemberInfo_PlayerName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.ExecuteUbergraph_PartyMemberInfo_PlayerName");
		
		UPartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberInfo_PlayerName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberInfo_PlayerName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C");
		return ptr;
	}

}


