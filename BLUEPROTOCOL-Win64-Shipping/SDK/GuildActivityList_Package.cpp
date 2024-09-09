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
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.CreateWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildActivity                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USBUIGuildActivityUMGBase*                   AsSBUIGuildActivityUMGBase                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityList_C::CreateWidgets(const struct FGuildActivity& Activity, class USBUIGuildActivityUMGBase** AsSBUIGuildActivityUMGBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.CreateWidgets");
		
		UGuildActivityList_C_CreateWidgets_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsSBUIGuildActivityUMGBase != nullptr)
			*AsSBUIGuildActivityUMGBase = params.AsSBUIGuildActivityUMGBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.GenerateGuildActivities
	 * 		Flags  -> ()
	 */
	void UGuildActivityList_C::GenerateGuildActivities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.GenerateGuildActivities");
		
		UGuildActivityList_C_GenerateGuildActivities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildActivityList_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.GetGuildComp");
		
		UGuildActivityList_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildActivityList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.Construct");
		
		UGuildActivityList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.BindInit
	 * 		Flags  -> ()
	 */
	void UGuildActivityList_C::BindInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.BindInit");
		
		UGuildActivityList_C_BindInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.OnComplete RequestGetGuildActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityList_C::OnCompleteRequestGetGuildActivity(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.OnComplete RequestGetGuildActivity");
		
		UGuildActivityList_C_OnCompleteRequestGetGuildActivity_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.GenerateActivities
	 * 		Flags  -> ()
	 */
	void UGuildActivityList_C::GenerateActivities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.GenerateActivities");
		
		UGuildActivityList_C_GenerateActivities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.OnRequestPlayerCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildActivityList_C::OnRequestPlayerCard(const class FString& UserId, const class FString& CharacterId, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.OnRequestPlayerCard");
		
		UGuildActivityList_C_OnRequestPlayerCard_Params params {};
		params.UserId = UserId;
		params.CharacterId = CharacterId;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.OnCompleteProfileLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityList_C::OnCompleteProfileLoaded(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.OnCompleteProfileLoaded");
		
		UGuildActivityList_C_OnCompleteProfileLoaded_Params params {};
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
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.OnClosePlayerCard
	 * 		Flags  -> ()
	 */
	void UGuildActivityList_C::OnClosePlayerCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.OnClosePlayerCard");
		
		UGuildActivityList_C_OnClosePlayerCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityList.GuildActivityList_C.ExecuteUbergraph_GuildActivityList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityList_C::ExecuteUbergraph_GuildActivityList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityList.GuildActivityList_C.ExecuteUbergraph_GuildActivityList");
		
		UGuildActivityList_C_ExecuteUbergraph_GuildActivityList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildActivityList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildActivityList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildActivityList.GuildActivityList_C");
		return ptr;
	}

}


