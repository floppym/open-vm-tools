/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CResponseDoc_h_
#define CResponseDoc_h_

namespace Caf {

/// A simple container for objects of type Response
class CResponseDoc {
public:
	CResponseDoc() :
		_clientId(CAFCOMMON_GUID_NULL),
		_requestId(CAFCOMMON_GUID_NULL),
		_isInitialized(false) {}
	virtual ~CResponseDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const UUID clientId,
		const UUID requestId,
		const std::string pmeId,
		const SmartPtrCResponseHeaderDoc responseHeader,
		const SmartPtrCManifestCollectionDoc manifestCollection,
		const SmartPtrCAttachmentCollectionDoc attachmentCollection,
		const SmartPtrCStatisticsDoc statistics) {
		if (! _isInitialized) {
			_clientId = clientId;
			_requestId = requestId;
			_pmeId = pmeId;
			_responseHeader = responseHeader;
			_manifestCollection = manifestCollection;
			_attachmentCollection = attachmentCollection;
			_statistics = statistics;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the ClientId
	UUID getClientId() const {
		return _clientId;
	}

	/// Accessor for the RequestId
	UUID getRequestId() const {
		return _requestId;
	}

	/// Accessor for the PmeId
	std::string getPmeId() const {
		return _pmeId;
	}

	/// Accessor for the ManifestCollection
	SmartPtrCResponseHeaderDoc getResponseHeader() const {
		return _responseHeader;
	}

	/// Accessor for the ManifestCollection
	SmartPtrCManifestCollectionDoc getManifestCollection() const {
		return _manifestCollection;
	}

	/// Accessor for the AttachmentCollection
	SmartPtrCAttachmentCollectionDoc getAttachmentCollection() const {
		return _attachmentCollection;
	}

	/// Accessor for the Statistics
	SmartPtrCStatisticsDoc getStatistics() const {
		return _statistics;
	}

private:
	UUID _clientId;
	UUID _requestId;
	std::string _pmeId;
	SmartPtrCResponseHeaderDoc _responseHeader;
	SmartPtrCManifestCollectionDoc _manifestCollection;
	SmartPtrCAttachmentCollectionDoc _attachmentCollection;
	SmartPtrCStatisticsDoc _statistics;
	bool _isInitialized;

private:
	CAF_CM_DECLARE_NOCOPY(CResponseDoc);
};

CAF_DECLARE_SMART_POINTER(CResponseDoc);

}

#endif