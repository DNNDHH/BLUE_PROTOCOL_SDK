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
	 * WidgetBlueprintGeneratedClass GuildMemberList.GuildMemberList_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UGuildMemberList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VB_Items;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectedMemberData;                                    // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class USBPlayerGuildComponent* GetGuildComp();
		void GenerateMemberData();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void OnMemberListGetted(int32_t RetCode);
		void OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData);
		void CompletedAcceptMember(int32_t RetCode);
		void ExecuteUbergraph_GuildMemberList(int32_t EntryPoint);
		void OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
