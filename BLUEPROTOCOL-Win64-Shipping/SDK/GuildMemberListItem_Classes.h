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
	 * WidgetBlueprintGeneratedClass GuildMemberListItem.GuildMemberListItem_C
	 * Size -> 0x0129 (FullSize[0x03A1] - InheritedSize[0x0278])
	 */
	class UGuildMemberListItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_ChangeType;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonPlayerListPannel_C*                           CommonPlayerListPannel;                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGuildMemberData                                    GuildMemberData;                                         // 0x0290(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		class UGuildMemberSettingDialog_C*                         Dialog;                                                  // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectedMember;                                        // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedCancelInvite;                                   // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRequestGuildMemberButtonClicked;                       // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bInviteList;                                             // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void InitChangeTypeBtn();
		void SetInviteMemberData(const struct FGuildMemberData& GuildMemberData);
		void GetMemberData(struct FGuildMemberData* Data);
		void SetSelected(bool IsSelected);
		void InitializeMemberData();
		void SetMemberData(const struct FGuildMemberData& GuildMemberData);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnClosed();
		void Destruct();
		void OnSelectedMemberListPannel(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
		void OnRequestGuildMemberInviteCancel_Event();
		void ExecuteUbergraph_GuildMemberListItem(int32_t EntryPoint);
		void OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
		void OnClickedCancelInvite__DelegateSignature(class UGuildMemberListItem_C* MemberData);
		void OnSelectedMember__DelegateSignature(class UGuildMemberListItem_C* MemberData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
