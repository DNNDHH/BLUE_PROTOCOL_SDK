#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass GuildInviteMemberList.GuildInviteMemberList_C
	 * Size -> 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
	 */
	class UGuildInviteMemberList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VB_Items;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectedMemberData;                                    // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedCancelInvite;                                   // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRequestGuildMemberButtonClicked;                       // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class USBPlayerGuildComponent* GetGuildComp();
		void GenerateInviteMemberData();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void OnCompletedInviteMemberList_Event(int32_t RetCode);
		void OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData);
		void OnClickedCancelInvite_Event(class UGuildMemberListItem_C* MemberData);
		void ExecuteUbergraph_GuildInviteMemberList(int32_t EntryPoint);
		void OnRequestGuildMemberButtonClicked__DelegateSignature(const struct FGuildMemberData& Data);
		void OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data);
		void OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
