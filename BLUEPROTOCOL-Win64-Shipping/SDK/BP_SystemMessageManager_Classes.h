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
	 * BlueprintGeneratedClass BP_SystemMessageManager.BP_SystemMessageManager_C
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UBP_SystemMessageManager_C : public USBSystemMessageManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    RequestMax;                                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9E2F[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USystemMessage_C*                                    SysMsgUI;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSystemMessageRequestData>                   SysMsgReqDataList;                                       // 0x0050(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSystemMessageRequestData>                   DemoStackList;                                           // 0x0060(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool GetContentActivateMessage(TArray<class FName> ContentId, class FText* Message);
		bool IsSystemMessageShowingOrStandby();
		void ShowGetEmoteMessage(class UObject* WorldContextObject, const class FName& EmoteId);
		void EndMessage();
		void ShowMessage(class UObject* WorldContextObject, const class FText& Message, bool IsLowerPosition, bool bDoNotSkip);
		void ClearSystemMessage();
		void CreateSysMsg(const struct FSystemMessageRequestData& ReqData);
		void OnEndMessage_();
		void CustomEvent_1();
		void ExecuteUbergraph_BP_SystemMessageManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
