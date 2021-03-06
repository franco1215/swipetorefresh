/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace br {
		namespace com {
		namespace leoleal {
		namespace swipetorefresh {
			namespace swipetorefresh {


class SwipeToRefreshProxy : public titanium::Proxy
{
public:
	explicit SwipeToRefreshProxy(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> add(const v8::Arguments&);
	static v8::Handle<v8::Value> isRefreshing(const v8::Arguments&);
	static v8::Handle<v8::Value> setRefreshing(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_refreshing(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

			} // namespace swipetorefresh
		} // swipetorefresh
		} // leoleal
		} // com
		} // br
